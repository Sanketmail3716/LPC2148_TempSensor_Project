#include"ADC.h"

void ADC_init()
{
  PINSEL0 |=0x00000000;
	PINSEL1 |=0x01000000;
	PINSEL2 |=0x00000000;	
	AD0CR|=0x00200F02;
}

 unsigned int ADC_read()
{
 	    AD0CR|=(1<<24);
      while(!(AD0DR1&(1<<31)));	    
     	return ((AD0DR1&(0x0000FFC0))>>6);

}
