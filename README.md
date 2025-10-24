# StepperMotor
Simple library for Arduino to control a stepper motor.
I thought it would be educational to write my own library, plus I understand it better than Arduino's default stepper library.

The stepper motor is a type, which can be constructed by providing the four pins as an argument. 
Clockwise and counter clockwise rotation are then methods of this class, which take delay time in milliseconds
 as arguments. For example:

StepperMotor steppy(3, 5, 6, 7);

for (int i=0; i<256; i++){
    steppy.RotateCCW(2); // argument is de delay, (higher values is slower rotation)
  }
  for (int i=0; i<256; i++){
    steppy.RotateCW(2);
  }
}

  
