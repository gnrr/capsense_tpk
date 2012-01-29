//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules

BYTE out_p1;

void main(void)
{
	M8C_EnableGInt ; // Uncomment this line to enable Global Interrupts
	// Insert your main routine code here.
	CSD_1_Start();
	CSD_1_InitializeBaselines() ; //scan all sensors first time, init baseline
	CSD_1_SetDefaultFingerThresholds() ; 

	out_p1 = 0xFF;

	while(1) {
		BYTE val_p1 = out_p1;
#if 0
		if(CSD_1_bIsSensorActive(0)) {
			val_p1 &= ~0x08;  // LED LO (touch sw indicator)
		} else {
			val_p1 |= 0x08;   // LED HI
		}
#endif
		volatile unsigned short i;
		for(i=1000; i>0; i--);

		val_p1 ^= 0x08;   // LED

		out_p1 = val_p1;
		PRT1DR = out_p1;
	}
}
