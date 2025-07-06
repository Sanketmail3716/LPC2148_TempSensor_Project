#include<lpc214x.h>           
#include"PLL.h"
#include"Lcd_4bit.h" 
#include"ADC.h"



void Delay(unsigned int );    

void main (void)
	
{ 
	
  
  
  unsigned int  ADC_result;
	PLL_SET();
  LCD_Init();
	ADC_init();
	LCD_Command(0x80);
	LCD_string("Temp :");
    while(1)                
    {
		    ADC_result=ADC_read();			
			  ADC_result=((ADC_result*3.22)-500);
				ADC_result=( ADC_result/10);
				display(ADC_result);
		    			

		}
}

void Delay(unsigned int time)
{
    int j;
    int i;
    for(i=0;i<time;i++)
    {
        for(j=0;j<60000;j++)
        {
        }
    }
}

