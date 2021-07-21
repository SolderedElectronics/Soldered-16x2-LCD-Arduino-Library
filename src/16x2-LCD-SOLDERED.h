/**
 **************************************************
 *
 * @file        16x2-LCD-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Zvonimir Haramustek for Soldered.com.com
 ***************************************************/

#ifndef __SENSOR__
#define __SENSOR__

#define I2C_ADDRESS 0x20

#include "Arduino.h"
#include "libs/Generic-easyC/easyC.h"

class LCD : public LCD_I2C
{
  public:
    LCD() : LCD_I2C(I2C_ADDRESS)
    {
    }

  protected:
  private:
};

#endif
