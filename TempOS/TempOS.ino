/*
 * TempOS
 * Guillemette Florent
 * Version 1.0
 * Licence : CC BY-NC-SA 3.0 FR
 */

#include "tempos.h"

Tempos tempos(1111);

void setup() {
  tempos.init();
}
void loop() {
  int windDir = readWinddirection(1,5)
  tempos.server();
}

int readWinddirection(int pin, int inputV){
  float Vpin = analogRead(pin)*0.0049;
  if(Vpin>0 && Vpin<inputV*0.25){
    return 0;
  }
  else if(Vpin>inputV*0.25 && Vpin<inputV*0.5){
    return 1;
  }
  else if(Vpin>inputV*0.5 && Vpin>inputV*0.75){
    return 2;
  }
  else {
    return 3;
  }
}
