
#include <xc.h>
#include "main.h"
#include "gpio.h"
#include "timer0.h"

void main(void) {
    
    /* Peripheral and System Initialization*/
      
    /* PortA initialization */
    PortA_Initialize();
    
    /* PortB initialization */
    PortB_Initialize();
    
    /* PortC initialization */
    PortC_Initialize();
    
    /* PortD initialization */
    PortD_Initialize();
    
    /* PortE initialization */
    PortE_Initialize();
    
    /* PortF initialization */
    PortF_Initialize();
   
    /* TIMER0 Initialization */
    TIMER0_Initialize();
     
    /* infinite loop */
    while(1)
    {
     switch(PORTD)   /* Read input port */
     {
         case 0xF0:     
             
             TodosOPEN();   
            
             break;
         
         case 0x70:     
             
             Secuencia1(); /* Secuencia1 */           
            
             break;
         
         case 0xB0:       
            
             Secuencia2(); /* Secuencia2 */           
            
             break;
             
         case 0xC0:       
            
             Secuencia3();  /* Secuencia3 */           
          
             break;
         
         case 0x50:      
            
             Secuencia4();   /* Secuencia4 */           
          
             break;
         
         default:        /* Todas las demás combinaciones */
             
             
             
             break;
     } /* end switch */
        
    } /* end while */
    
    return;
}

void TodosOPEN(void)
{
    LATF = 0x00;                /* OFF ON OFF */
}


void Secuencia1(void)
{
                                /* ON OFF OFF */
    TIMER0_Delay();             /* Delay subroutine */
                                /* OFF ON OFF */
    TIMER0_Delay();             /* Delay subroutine */
                                /* OFF OFF ON */
    TIMER0_Delay();             /* Delay subroutine */
}

void Secuencia2(void)
{
                                /* OFF ON ON */
    TIMER0_Delay();             /* Delay subroutine */
                                /* OFF OFF OFF */
    TIMER0_Delay();             /* Delay subroutine */
}

void Secuencia3(void)
{
                                /* ON ON OFF */
    TIMER0_Delay();             /* Delay subroutine */
                                /* ON OFF ON */
    TIMER0_Delay();             /* Delay subroutine */          
                                /* OFF ON ON */
    TIMER0_Delay();             /* Delay subroutine */          
}

void Secuencia4(void)
{
                                /* OFF OFF ON */
    TIMER0_Delay();             /* Delay subroutine */
                                /* ON OFF OFF */
    TIMER0_Delay();             /* Delay subroutine */      
}

void TodasComb(void)
{
                                /* ON OFF ON */
}