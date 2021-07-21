/**
 **************************************************
 *
 * @file        Functions.ino
 * @brief       Example of using custom functions. See more at solde.red/333016
 *
 *
 *
 * @authors     Zvonimir Haramustek for Soldered.com.com
 ***************************************************/

#include "16x2-LCD-SOLDERED.h"

LCD lcd; // LCD object


void setup()
{
    lcd.begin();     // Initialize LCD
    lcd.backlight(); // Turn on LCD backlight
}

void loop()
{
    // Autoscroll
    lcd.setCursor(5, 0);
    lcd.print(F("Autoscrolling"));
    lcd.setCursor(10, 1);
    lcd.autoscroll();

    for (int i = 0; i < 10; i++)
    {
        lcd.print(i);
        delay(200);
    }

    lcd.noAutoscroll();
    lcd.clear();

    // Scroll left and right
    lcd.setCursor(10, 0);
    lcd.print(F("To the left!"));
    for (int i = 0; i < 10; i++)
    {
        lcd.scrollDisplayLeft();
        delay(200);
    }
    lcd.clear();
    lcd.print(F("To the right!"));
    for (int i = 0; i < 10; i++)
    {
        lcd.scrollDisplayRight();
        delay(200);
    }
    lcd.clear();

    // Cursor
    lcd.setCursor(0, 0);
    lcd.cursor();
    lcd.print(F("Cursor"));
    delay(3000);
    lcd.clear();

    // Cursor blink
    lcd.setCursor(0, 0);
    lcd.blink();
    lcd.print(F("Cursor blink"));
    delay(3000);
    lcd.clear();

    // Blink without cursor
    lcd.setCursor(0, 0);
    lcd.noCursor();
    lcd.print(F("Just blink"));
    delay(3000);
    lcd.noBlink();
    lcd.clear();
}
