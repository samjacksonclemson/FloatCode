#include <SyRenSimplified.h>
SyRenSimplified RM; // right motor object
SyRenSimplified LM; // left motor object

int main(void){ // main function to be executed

  bool powerSwitch;
  int lightSensor;

  // get input from power switch

  // setup code to run once, setting all motors to stop
  void setup() {
        
      SyRenTXPinSerial.begin(9600);
        RM.motor(1,0);
        LM.motor(1,0);
      }

      // looping code to run while powerSwitch is on (true)
  while (powerSwitch) {

    // get input from power switch

     RM.motor(); // right motor counterclockwise
     LM.motor(); // left motor clockwise

    // read lightSensor value ??

    // test for sensor to match up with LED
    if (lightSensor == HIGH) {
       RM.motor(1,0); // Stop both motors
       LM.motor(1,0);
       delay(60000); // delay for 1 minute in miliseconds
    }
  
  }

return 0;
}
