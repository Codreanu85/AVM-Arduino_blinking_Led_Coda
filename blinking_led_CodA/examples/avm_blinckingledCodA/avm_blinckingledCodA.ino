#include <avm_blinckingledCodA.h>
#include "Arduino.h"

//.ino

void setup(){
	
	setup_AVM_Blink();
}

void loop(){
	AVM_BLINK(250);
	AVM_BLINK(2000);
	AVM_BLINK(250);
	AVM_BLINK(2000);
	
	
	
}
