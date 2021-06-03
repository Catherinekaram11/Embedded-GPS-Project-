#include <initilization of ports.h>
#include<D:\2nd electrical 2nd semster>
#include<stdio.h>
#include<stdint.h>

void PORTA_INIT();
void PORTB_INIT();
void PORTF_INIT();
void distance(double d);

int main()
{
    void PORTB_INIT();
    void PORTF_INIT();
    void distance(double d) {
        if d > 100.0
            GPIO_PORTF_DATA_R = 0x0004;
    }


    void PORTB_INIT()
    {
        SYSCTL_RCGCGPIO_R |= 0x00000002;
        while ((SYSCTL_PRGPIO_R & 0x00000002) == 0) {};
        GPIO_PORTB_LOCK_R = 0x4C4F434B;
        GPIO_PORTB_CR_R = 0xFF;
        GPIO_PORTB_DIR_R = 0xFF;
        GPIO_PORTB_DEN_R = 0xFF;
        GPIO_PORTB_AFSEL_R = 0x00;
        GPIO_PORTB_AMSEL_R = 0x00;
        GPIO_PORTB_PCTL_R = 0x00000000;
    }
    void PORTF_INIT()
    {

        SYSCTL_RCGCGPIO_R |= 0x00000020;
        while ((SYSCTL_PRGPIO_R & 0x00000020) == 0) {};
        GPIO_PORTF_LOCK_R = 0x4C4F434B;
        GPIO_PORTF_CR_R = 0x1F;
        GPIO_PORTF_DIR_R = 0x0E;
        GPIO_PORTF_PCTL_R = 0x0000000;
        GPIO_PORTF_AMSEL_R = 0x00;
        GPIO_PORTF_AFSEL_R = 0x00;
        GPIO_PORTF_DEN_R = 0x1F;
        GPIO_PORTF_DATA_R = 0x0002;


    }