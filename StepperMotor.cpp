#include "StepperMotor.h"
#include "Arduino.h"

StepperMotor::StepperMotor(int pin1, int pin2, int pin3, int pin4){
	StepperMotor::Pin1 = pin1;
	StepperMotor::Pin2 = pin2;
	StepperMotor::Pin3 = pin3;
	StepperMotor::Pin4 = pin4;
}
	
void StepperMotor::RotateCW(int delaytime){
	digitalWrite(Pin1, HIGH);
	digitalWrite(Pin2, LOW);
	digitalWrite(Pin3, LOW);
	digitalWrite(Pin4, LOW);
	delay(delaytime);
	digitalWrite(Pin1, LOW);
	digitalWrite(Pin2, HIGH);
	digitalWrite(Pin3, LOW);
	digitalWrite(Pin4, LOW);
	delay(delaytime);
	digitalWrite(Pin1, LOW);
	digitalWrite(Pin2, LOW);
	digitalWrite(Pin3, HIGH);
	digitalWrite(Pin4, LOW);
	delay(delaytime);
	digitalWrite(Pin1, LOW);
	digitalWrite(Pin2, LOW);
	digitalWrite(Pin3, LOW);
	digitalWrite(Pin4, HIGH);
	delay(delaytime);
}

void StepperMotor::RotateCCW(int delaytime){
	digitalWrite(Pin1, LOW);
	digitalWrite(Pin2, LOW);
	digitalWrite(Pin3, LOW);
	digitalWrite(Pin4, HIGH);
	delay(delaytime);
	digitalWrite(Pin1, LOW);
	digitalWrite(Pin2, LOW);
	digitalWrite(Pin3, HIGH);
	digitalWrite(Pin4, LOW);
	delay(delaytime);
	digitalWrite(Pin1, LOW);
	digitalWrite(Pin2, HIGH);
	digitalWrite(Pin3, LOW);
	digitalWrite(Pin4, LOW);
	delay(delaytime);
	digitalWrite(Pin1, HIGH);
	digitalWrite(Pin2, LOW);
	digitalWrite(Pin3, LOW);
	digitalWrite(Pin4, LOW);
	delay(delaytime);
}

void StepperMotor::Stop(){
	digitalWrite(Pin1, LOW);
	digitalWrite(Pin2, LOW);
	digitalWrite(Pin3, LOW);
	digitalWrite(Pin4, LOW);
	delay(2);
}