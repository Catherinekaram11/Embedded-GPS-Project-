//delay function
void delay(double sec)
{
    unsigned int i, j;
    for (i = 0;i < sec;i++)
        for (j = 0;j < 50;j++);
}
//LCD intialization function
void intialization()
{
    PORTA_INIT();
    PORTB_INIT();
    delay(0.5);
    LCD_command(0x30);
    delay(0.5);
    LCD_data('N');
    delay(5.0);
    LCD_command(0x38);
    delay(0.5);
    LCD_data('N');
    delay(5.0);
    LCD_command(0x01);
    delay(0.5);
    LCD_data('N');
    delay(5.0);
    LCD_command(0x06);
    delay(0.5);
    LCD_data('N');
    delay(5.0);
    LCD_command(0x0F);
}