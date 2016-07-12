/*
  tempos.h - Library for simplified management of weather station
  with gsm shield.
  Created by Florent Guillemette, July 12, 2016.
  Released into Creative Commons BY-NC-SA 3.0
*/

#ifndef Tempos_h
#define Tempos_h

#include "Arduino.h"

class Tempos
{
  public:
    Tempos(int CodePin);
    int init();
    void server(string windDir, string);
  private:
    int _codePin;
    char _senderNumber[20];
};

#endif
