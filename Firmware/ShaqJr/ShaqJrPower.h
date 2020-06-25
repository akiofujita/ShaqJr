#ifndef ShaqJrPower_h
#define ShaqJrPower_h

#include <Arduino.h>

class ShaqJrPower
{
  private:

  public:

    ShaqJrPower();
    void begin();
    
    bool isCharging();
    uint16_t getBatteryVoltage();
    
    void enableGPS();
    void disableGPS();
    
    void enableMP3();
    void disableMP3();
};

#endif
