#include<stdbool.h>
#define RS RE0
#define RW RE2
#define EN RE1
#define LCD PORTD
void delay(unsigned int d)
{
    while(d--);
}
void pulse()
{
    EN=1;
    delay(200);
    EN=0;
    delay(200);
}

void lcd_command(char data)
{
    RS=0;
    LCD=data;
    pulse();
}

void lcd_display(char data)
{
    RS=1;
    LCD=data;
    pulse();
}