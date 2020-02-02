#ifndef ShaqJrPower_h
#define ShaqJrPower_h
#include <Arduino.h>

class ShaqJrPower
{
  private:

  public:
    bool isCharging();
    uint16_t getBatteryVoltage();
};

#endif
