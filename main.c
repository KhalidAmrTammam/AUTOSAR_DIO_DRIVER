

/**
 * main.c
 */
#include "DIO.h"
void DIO_init(uint8 port , uint8 inputPins , uint8 outputPins);

int main(void)
{
    DIO_init(PORTF,0,GREEN_LED);
    Dio_WriteChannel (43,STD_HIGH);


	return 0;
}
void DIO_init(uint8 port , uint8 inputPins , uint8 outputPins)
{
    uint8 usedPins = inputPins | outputPins;

    SET_BIT(SYSCTL_RCGCGPIO_R,port);                   /* Activate PORT clock */
    while(GET_BIT(SYSCTL_RCGCGPIO_R,port) == 0);       /* Check if PORT clock is activated */

    switch(port)
    {
    /* ......... PORTA ............*/
    case (PORTA):

    GPIO_PORTA_LOCK_R = 0x4C4F434B;                    /* Unlock PORTA pins */
    GPIO_PORTA_CR_R = usedPins;                        /* Enable changes on PORTA used pins */

    if(outputPins != 0)
    {
        GPIO_PORTA_DIR_R = outputPins;                 /* set output pins direction */
    }
    GPIO_PORTA_PUR_R = inputPins;                      /* Pull up input pins */
    GPIO_PORTA_DEN_R = usedPins;                       /* Digital Enable PORTA used pins */
    break;

    /* ......... PORTB ............*/
    case (PORTB):

    GPIO_PORTB_LOCK_R = 0x4C4F434B;                    /* Unlock PORTB pins */
    GPIO_PORTB_CR_R = usedPins;                        /* Enable changes on PORTB used pins */

    if(outputPins != 0)
    {
        GPIO_PORTB_DIR_R = outputPins;                 /* set output pins direction */
    }
    GPIO_PORTB_PUR_R = inputPins;                      /* Pull up input pins */
    GPIO_PORTB_DEN_R = usedPins;                       /* Digital Enable PORTB used pins */
    break;

    /* ......... PORTC ............*/
    case (PORTC):
    GPIO_PORTC_LOCK_R = 0x4C4F434B;                    /* Unlock PORTC pins */
    GPIO_PORTC_CR_R = usedPins;                        /* Enable changes on PORTC used pins */

    if(outputPins != 0)
    {
        GPIO_PORTC_DIR_R = outputPins;                 /* set output pins direction */
    }
/*   GPIO_PORTC_PUR_R = inputPins;                       Pull up input pins */
    GPIO_PORTC_DEN_R = usedPins;                       /* Digital Enable PORTC used pins */
    break;

    /* ......... PORTD ............*/
    case (PORTD):
    GPIO_PORTD_LOCK_R = 0x4C4F434B;                    /* Unlock PORTD pins */
    GPIO_PORTD_CR_R = usedPins;                        /* Enable changes on PORTD used pins */

    if(outputPins != 0)
    {
       GPIO_PORTD_DIR_R = outputPins;                  /* set output pins direction */
    }
    GPIO_PORTD_PUR_R = inputPins;                      /* Pull up input pins */
    GPIO_PORTD_DEN_R = usedPins;                       /* Digital Enable PORTD used pins */
    break;

    /* ......... PORTE ............*/
    case (PORTE):
    GPIO_PORTE_LOCK_R = 0x4C4F434B;                    /* Unlock PORTE pins */
    GPIO_PORTE_CR_R = usedPins;                        /* Enable changes on PORTE used pins */

    if(outputPins != 0)
    {
        GPIO_PORTE_DIR_R = outputPins;                 /* set output pins direction */
    }
    GPIO_PORTE_PUR_R = inputPins;                      /* Pull up input pins */
    GPIO_PORTE_DEN_R = usedPins;                       /* Digital Enable PORTE used pins */
    break;

    /* ......... PORTF ............*/
    case (PORTF):

    GPIO_PORTF_LOCK_R = 0x4C4F434B;                     /* Unlock PORTF pins */
    GPIO_PORTF_CR_R = usedPins;                         /* Enable changes on PORTF used pins */

    if(outputPins != 0)
    {
        GPIO_PORTF_DIR_R = outputPins;                 /* set output pins direction */
    }
    GPIO_PORTF_PUR_R = inputPins;                      /* Pull up input pins */
    GPIO_PORTF_DEN_R = usedPins;                       /* Digital Enable PORTF used pins */
    break;

    default:
    break;
    }
}

