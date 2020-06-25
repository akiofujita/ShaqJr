#include "ShaqJrPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint8_t gpsPwrPin = 2;

const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;

/*
 * int - most Arduino boards define 2 bytes, but some do 4
 * float - give you decimals; less precise
 * double - give decimals; more precise
 * 
 * uint8_t - unsigned 8 bit integer (0, 255)
 * uint16_t - unsigned 16 bit integer (0, 65335)
 * // negative integers wrap around, -100 -> 65235
 * 
 * int8_t - signed 8 bit integer (-127, 127)
 * int16_t - signed 16 bit integer (-32768, 32767)
 * 
 */

ShaqJrPower::ShaqJrPower()
{
  
}

void ShaqJrPower::begin()
{
  pinMode(chrgPin, INPUT);
  pinMode(gpsPwrPin, OUTPUT);
}

// Returns whether or not the battery is charging
bool ShaqJrPower::isCharging()
{
  return !digitalRead(chrgPin); //return 0 if charging, if 1 if not charging
}

uint16_t ShaqJrPower::getBatteryVoltage()
{
  return 2 * VDD * (analogRead(battPin) / (float)adcResolution);
}
    
void ShaqJrPower::enableGPS()
{
  digitalWrite(gpsPwrPin, HIGH); //enables regulator, turning ON GPS circuit
}

void ShaqJrPower::disableGPS()
{
  digitalWrite(gpsPwrPin, LOW); //disables regulator, turning OFF GPS circuit
}
  
void ShaqJrPower::enableMP3()
{
  
}

void ShaqJrPower::disableMP3()
{
  
}
