//TempOS
//Guillemette Florent
//version 1.0
#include <GSM.h>
#define PINNUMBER ""
GSM gsmAccess;
GSM_SMS sms;

char adminNumber = ""

char getLastSMS(){
   //Get the last sms and return message
   return 
}

int deleteLastSMS(){
  //delete last sms and return 0 for good exec
  return c
}

void setup() {
  Serial.begin(9600);

  // connection state
  boolean notConnected = true;

  // Start GSM shield
  // If your SIM has PIN, pass it as a parameter of begin() in quotes
  while(notConnected)
  {
    if(gsmAccess.begin(PINNUMBER)==GSM_READY){
      notConnected = false;
      Serial.println("Connected to network");
    }
    else
    {
      Serial.println("Not connected");
      delay(1000);
    }
  }
}
void loop() {
  
}
