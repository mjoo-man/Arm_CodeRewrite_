#include <AccelStepper.h>

AccelStepper stepper(1, 2, 3); // 1 == microstep driver, DIR- on 3 and PUL- on 2
int enable_pin = 4; // enable pin connected



void setup() {
  // put your setup code here, to run once:

  // This enablges the driver
   stepper.setEnablePin(enable_pin);
   stepper.setMaxSpeed(10000);
   stepper.setSpeed(100); 
}

void loop() {
  stepper.runSpeed();
}
