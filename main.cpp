#include "stepper.h"
#include "keyboard.h"
#include "ledinv.h"
#include "ledpos.h"
#include <stdio.h>


Stepper MyStepper;
Keyboard MyKeyboard;
LedInv MyLedInv;
LedPos MyLedPos;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{

	if (MyKeyboard.eRead() == BUTTON_4) {
		MyStepper.SetLed(&MyLedInv);
	}
	else {
		MyStepper.SetLed(&MyLedPos);
	}

	while(1){
		Delay(500);
		if(MyKeyboard.eRead() == BUTTON_1) {
			MyStepper.StepRight();
		}
		else if(MyKeyboard.eRead() == BUTTON_2) {
			MyStepper.StepLeft();
		}
		else {
		}
	}
}
