/*
  tempos.cpp - Library for simplified management of weather station
  with gsm shield.
  Created by Florent Guillemette, July 12, 2016.
  Released into Creative Commons BY-NC-SA 3.0
*/

#include "tempos.h"
#include <GSM.h>

GSM gsmAccess;
GSM_SMS sms;

Tempos::Tempos(int codePin)
{
  _codePin = codePin;
}

int Tempos::init()
{
  Serial.begin(9600);
  Serial.println("Init state");
  return 0;
}

void Tempos::server()
{
  char c;
  if (sms.available()){
    sms.remoteNumber(_senderNumber, 20);
  }
}
