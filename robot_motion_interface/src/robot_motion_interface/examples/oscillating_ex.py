"""
Oscillates robot joints using Panda or IsaacSim interface.

Usage:
    python -m robot_motion_interface.examples.oscillate_robots --backend panda
    python -m robot_motion_interface.examples.oscillate_robots --backend isaacsim
"""

from robot_motion_interface.interface import Interface



import os
import time
import threading
import argparse
from pathlib import Path

import numpy as np


def configure_interface(interface_str:str, parser: argparse.ArgumentParser) -> Interface:
    """
    Configure the robot interface based on real or sim

    Args:
        interface_str (str): Either "isaacsim", "mujoco", "mujoco_browser", "real" 
        parser (ArgumentParser): Argument parser to pass to Isaacsim
    Returns: 
        (Interface) The specific child interface
    """
    config_dir = Path(__file__).resolve().parents[3] / "config"

    if (interface_str == "isaacsim"):
        # Imported conditionally so that unessary dependencies aren't required
        from robot_motion_interface.isaacsim.isaacsim_interface import IsaacsimInterface
        config_path = config_dir / "isaacsim_config.yaml"
        interface = IsaacsimInterface.from_yaml(config_path, parser)

    elif (interface_str == "mujoco"):
        # Imported conditionally so that unessary dependencies aren't required
        from robot_motion_interface.mujoco.mujoco_interface import MujocoInterface
        config_path = config_dir / "mujoco_config.yaml"
        interface = MujocoInterface.from_yaml(config_path)
    elif (interface_str == "mujoco_browser"):
        # Imported conditionally so that unessary dependencies aren't required
        from robot_motion_interface.mujoco.mujoco_browser import MujocoBrowserInterface
        config_path = config_dir / "mujoco_config.yaml"
        interface = MujocoBrowserInterface.from_yaml(config_path)
    elif (interface_str == "real"):
        # Imported conditionally so that unessary dependencies aren't required
        from robot_motion_interface.bimanual_interface import BimanualInterface
        config_path = config_dir / "bimanual_arm_config.yaml"
        interface = BimanualInterface.from_yaml(config_path)
    else:
        raise ValueError(f"Unsupported interface: {interface_str}")
    
    return interface


def oscillate_setpoint(interface: Interface, base_setpoint:np.ndarray, joint_names:list[str],
                       amplitude:float=0.3, period:float=2.0):
    """
    Continuously sinusoidally oscillates specified joints

    Args:
        interface (Interface): The interface instance (can be IsaacsimInterface, PandaInterface, etc)
        base_setpoint (np.ndarray): (n_joints) The base joint positions for all joints.
        joint_names (list[str]): Names of joints to oscillate.
        amplitude (float): Amplitude of oscillation (radians). Default is 0.3.
        period (float): Period of oscillation in seconds. Default is 2.0.
    """
    while True:
        t = time.time()
        q = base_setpoint + amplitude * np.sin(2 * np.pi * t / period)
        interface.set_joint_positions(q, joint_names)
        time.sleep(0.05)  # ~20Hz update

def main(interface_str:str, parser: argparse.ArgumentParser = None):
    """
    Simple example of arms oscillating (can be bimanual)

    Args:
        interface_str (str): Either "isaacsim", "mujoco", "mujoco_browser", or "real" 
        parser (ArgumentParser): Argument parser to pass to Isaacsim
    """
  
    interface = configure_interface(interface_str, parser)
    
    setpoint = np.array([0.0, 0.0, -3*np.pi/4, -3*np.pi/4,  # joint3 (x2), joint4 (x2)
                       0.0, 0.0,                             # right_F2M3, right_F3M3
                       0.0, 0.0, 0.0, 0.0, 0.0, 0.0])       # left/right F1-F3 M4
    joint_names = [
      'left_panda_joint3', 'right_panda_joint3','left_panda_joint4', 'right_panda_joint4',
      'right_F2M3', 'right_F3M3','left_F1M4', 'left_F2M4', 'left_F3M4',
      'right_F1M4', 'right_F2M4', 'right_F3M4']

    osc_thread = threading.Thread(target=oscillate_setpoint, args=(interface, setpoint, joint_names))
    osc_thread.start()

    interface.start_loop()

    try: 
        while(True):
            time.sleep(0.1)
    except (KeyboardInterrupt):
        print("\nStopping Interface.")
    finally:
        interface.stop_loop()  



if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Run joint oscillation demo for Panda or Isaacsim.")
    parser.add_argument("--interface", type=str, choices=["real", "isaacsim", "mujoco", "mujoco_browser"], required=True)
    args = parser.parse_args()
    main(args.interface, parser)
