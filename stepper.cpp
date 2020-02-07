#include <LPC21xx.H>
#include "stepper.h"


enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::ucLedCtr--;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
		Stepper::pMyLed->On(Stepper::ucLedCtr);
	}
	else if(eStep == RIGHT){
		Stepper::ucLedCtr++;
		Stepper::ucLedCtr = Stepper::ucLedCtr % 4;
		Stepper::pMyLed->On(Stepper::ucLedCtr);
	}
	else{
	}
}

void Stepper::StepLeft(void){
	Stepper::Step(LEFT);
}


void Stepper::StepRight(void){
	Stepper::Step(RIGHT);
}

void Stepper::SetLed(Led *LedFunction){
	Stepper::pMyLed = LedFunction;
}

