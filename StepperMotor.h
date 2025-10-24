#include "Arduino.h"

class StepperMotor{
	public:
	
	StepperMotor(int pin1, int pin2, int pin3, int pin4);
	void RotateCW(int delaytime);
	void RotateCCW(int delaytime);
	void Stop();
	
	private:
	
	int Pin1;
	int Pin2;
	int Pin3;
	int Pin4;
};