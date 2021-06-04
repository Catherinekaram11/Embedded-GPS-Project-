//LCD command function
void LCD_command(char com) 
{
    GPIO_PORTA_DATA_R &= ~0xE0;    //Rs,Rw,E=0 
    GPIO_PORTB_DATA_R = com;
    GPIO_PORTA_DATA_R |=0x80;   //E=1
    delay(0.5);
    GPIO_PORTA_DATA_R &= ~0x80;   //E=0   
}
//LCD data function
void LCD_data(char data) {
    GPIO_PORTA_DATA_R |= 0x20;  //Rs=1
    GPIO_PORTB_DATA_R = data;
    GPIO_PORTA_DATA_R |= 0x80;   //E=1
    delay(3.0);
    GPIO_PORTA_DATA_R &=~0x80;  //E=0 