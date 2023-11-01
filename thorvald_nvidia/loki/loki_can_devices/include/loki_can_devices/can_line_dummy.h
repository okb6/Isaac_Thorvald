#ifndef THORVALD_CAN_LINE_DUMMY_H_
#define THORVALD_CAN_LINE_DUMMY_H_

#include <can_line_itf.h>


class CanLineDummy : public can_line_itf::CanLineItf
{

  public:
  CanLineDummy();
  ~CanLineDummy();
  bool initialize();
  bool begin();
  void getReceivedMsgs(std::vector<CanFrame>& can_frames);
  bool sendMsgs(std::vector<CanFrame> can_frames);

};

#endif

