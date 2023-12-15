from omni.isaac.kit import SimulationApp

simulation_app = SimulationApp({"headless": False})

from omni.isaac.core import World

from omni.isaac.core.utils.stage import open_stage

from omni.isaac.core.utils.nucleus import get_assets_root_path

enable_extension("omni.isaac.ros2_bridge")


scene_path ="/home/cairlab/IsaacSim-ros_workspaces/humble_ws/Isaac_Thorvald/thorvald_nvidia/loki/loki_simulator/worlds/thorvald_world.usd"


open_stage(usd_path=scene_path)

world = World()

world.reset()

while True:
    world.step()

simulation_app.close()