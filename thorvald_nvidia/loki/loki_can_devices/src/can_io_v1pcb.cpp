/****************************************************************
 *
 * Copyright (c) 2020
 *
 * Saga Robotics
 *
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * Project name: loki II
 * ROS package name: loki_can_devices
 * Description: For controlling IO on V1Rev6 main and V1Rev4 sister PCBs of the loki mobilde robot
 *								
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *			
 * Author: Lars Grimstad, email:lgrimstad@sagarobotics.com
 *
 * Date of creation: Sep 2020
 *
 *
 ****************************************************************/




//-----------------------------------------------
#include "loki_can_devices/can_io_v1pcb.h"
#include <iostream>
#include <sstream>
//-----------------------------------------------

V1PCB::V1PCB()
{

  digital_states_desired_.resize(digitals_.size());

  latest_state_.version = "?.?.?";
  latest_state_.digital_names.resize(digitals_.size());
  latest_state_.digital_values.resize(digitals_.size());
  latest_state_.analog_names.resize(0);
  latest_state_.analog_values.resize(0);
  latest_state_.temps.resize(0);
  latest_state_.ranges.resize(0);


  for (auto& elem : digitals_)
  {
    latest_state_.digital_names[elem.first] = elem.second.io_name;
  }
}


bool V1PCB::initIO(std::map<std::string, int> io_init_map, std::vector<CanFrame> &can_frames)
{

  can_id_ = io_init_map["id"];

  tpdo_1_ = 0x180 + can_id_;
  tpdo_2_ = 0x280 + can_id_;
  tpdo_3_ = 0x380 + can_id_;
  tpdo_4_ = 0x480 + can_id_;

  rpdo_1_ = 0x200 + can_id_;
  rpdo_2_ = 0x300 + can_id_;
  rpdo_3_ = 0x400 + can_id_;
  rpdo_4_ = 0x500 + can_id_;
 
  setName(IO_TYPE);

  digital_states_desired_[D_RL0] = io_init_map["rl0_init_state"];
  digital_states_desired_[D_RL1] = io_init_map["rl1_init_state"];
  digital_states_desired_[D_PC_PWR] = true;
  digital_states_desired_[D_PWR_CTRL] = true;
  digital_states_desired_[3] = true;
  digital_states_desired_[4] = true;
  digital_states_desired_[D_PC_PWR] = true;

  CanFrame can_frame;
  createCanFrameDigitals(can_frame, digital_states_desired_);
  can_frames.push_back(can_frame);
  can_frames.resize(1);

  latest_state_.id = can_id_;

}


void V1PCB::setName(std::string name)
{
  name_ = name;
  latest_state_.name = name_;
}


int V1PCB::getID()
{
  return can_id_;
}


void V1PCB::createCanFrameDigitals(CanFrame &can_frame, std::vector<bool> values)
{
  uint8_t bytes[8];
  uint8_t b0 = 0;
  b0 |= values[D_PC_PWR] << 7;
  b0 |= values[D_PWR_CTRL] << 3;// 6;
  b0 |= values[D_RL1] << 5;
  b0 |= values[D_RL0] << 4;

  can_frame.setId(rpdo_1_);
  can_frame.setLength(8);

  can_frame.setBytes( b0,
                      bytes[1],
                      bytes[2],
                      bytes[3],
                      bytes[4],
                      bytes[5],
                      bytes[6],
                      bytes[7]);

}


void V1PCB::getSetBoolServices(std::map<int, std::string> &set_bool_map)
{

  for (auto& elem : digitals_)
  {
    if (elem.second.service_name != "")
    {
      set_bool_map.insert({elem.first, elem.second.service_name});
    }
  }
}


bool V1PCB::evalReceivedMsg(CanFrame& msg)
{
  bool b_ret = false;
  if (msg.getId() == tpdo_1_)
  {

    uint8_t b0 = msg.getByte(0);
    uint8_t b1 = msg.getByte(1);
    uint8_t b2 = msg.getByte(2);
    uint8_t b3 = msg.getByte(3);
    uint8_t b4 = msg.getByte(4);
    uint8_t b5 = msg.getByte(5);
    uint8_t b6 = msg.getByte(6);
    uint8_t b7 = msg.getByte(7);

    
    std::stringstream version_ss;
    //std::cout << (int)b0 << std::endl;
    version_ss << (int)(b0 >> 4) << "." << (int)(b0 & 0xf) << "." << (int)(b1 >> 4);


    latest_state_.digital_values[D_CONT_START] = (bool)((b6 >> 7) & 1); 
    latest_state_.digital_values[D_CONT_HOLD]  = (bool)((b6 >> 6) & 1); 
    latest_state_.digital_values[D_CONT_COIL]  = (bool)((b6 >> 5) & 1); 
    latest_state_.digital_values[D_PC_PWR]     = (bool)((b6 >> 4) & 1); 
    latest_state_.digital_values[D_PWR_CTRL]   = (bool)((b6 >> 3) & 1); 
    latest_state_.digital_values[D_RL1]        = (bool)((b6 >> 2) & 1); 
    latest_state_.digital_values[D_RL0]        = (bool)((b6 >> 1) & 1); 
    latest_state_.digital_values[D_PCB_LED]    = (bool)((b6) & 1); 

    latest_state_.digital_values[D_ESTOP] =      (bool)((b7 >> 7) & 1); 
    latest_state_.digital_values[D_BUTTON] =     (bool)((b7 >> 6) & 1); 

    //version_ss << (int)msg.getByte(0) << "." << (int)msg.getByte(1) << "." << (int)msg.getByte(2);
    latest_state_.version = version_ss.str();
    b_ret = true;

  }

  else if (msg.getId() == tpdo_2_)
  {
    //uint8_t b0 = msg.getByte(0); 

    //std::cout << "b0: " << (int)b0 << std::endl;
    //latest_state_.digital_values[D_CONT_START] = (bool)((b0 >> 7) & 1); 
    //latest_state_.digital_values[D_CONT_HOLD]  = (bool)((b0 >> 6) & 1); 
    //latest_state_.digital_values[D_CONT_COIL]  = (bool)((b0 >> 5) & 1); 
    //latest_state_.digital_values[D_PC_PWR]     = (bool)((b0 >> 4) & 1); 
    //latest_state_.digital_values[D_PWR_CTRL]   = (bool)((b0 >> 3) & 1); 
    //latest_state_.digital_values[D_RL0]        = (bool)((b0 >> 2) & 1); 
    //latest_state_.digital_values[D_RL1]        = (bool)((b0 >> 1) & 1); 
    //latest_state_.digital_values[D_PCB_LED]    = (bool)((b0) & 1); 
    
    //latest_state_.digital_values[D_CONT_START] = (bool)msg.getByte(0);
    //latest_state_.digital_values[D_CONT_HOLD]  = (bool)msg.getByte(1);
    //latest_state_.digital_values[D_CONT_COIL]  = (bool)msg.getByte(2);
    //latest_state_.digital_values[D_PC_PWR]     = (bool)msg.getByte(3);
    //latest_state_.digital_values[D_PWR_CTRL]   = (bool)msg.getByte(4);
    //latest_state_.digital_values[D_RL0]        = (bool)msg.getByte(5);
    //latest_state_.digital_values[D_RL1]        = (bool)msg.getByte(6);
    //latest_state_.digital_values[D_PCB_LED]    = (bool)msg.getByte(7);

    b_ret = true;

  }

  return b_ret;
}

void V1PCB::callSetBoolService(std::vector<CanFrame> &can_frames, int service_id, bool value, bool &success, std::string &message)
{
  digital_states_desired_[service_id] = value;
  CanFrame can_frame;
  createCanFrameDigitals(can_frame, digital_states_desired_);
  can_frames.push_back(can_frame);
  can_frames.resize(1);
  success = true;
  std::stringstream message_ss;
  message_ss << "Switching " << digitals_.find(service_id)->second.io_name << " " << (value ? "ON" : "OFF");
  message = message_ss.str();

}



void V1PCB::getState(IOState &state)
{
  state = latest_state_;
}
