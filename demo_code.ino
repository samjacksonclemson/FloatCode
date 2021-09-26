#include <SyRenSimplified.h>
SyRenSimplified ST; 


void setup() {
  // put your setup code here, to run once:
  SyRenTXPinSerial.begin(9600);
  ST.motor(1,0);
}

void loop(){
  ST.motor(1,0); // temp for debugging

  delay(2000);

  ST.motor(1,60); // -127 if full reverse. 0 is stop. +127 is full forward

  delay(2000);

  ST.motor(1,0);

  delay(2000);

  ST.motor(1,-60);

  delay(2000);

}
