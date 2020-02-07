#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper
{
	public:
		void StepRight();
		void StepLeft();
		void SetLed(Led *);
	
	private:
		unsigned char ucLedCtr;
		Led *pMyLed;
		void Step(enum Step);
		
};


#endif
