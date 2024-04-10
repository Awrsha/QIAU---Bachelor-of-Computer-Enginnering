#include <mega16.h>
#include <delay.h>

char ss[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x27,0x7F,0x6F};

void main(void)
{
  PORTC=0xFF;
  DDRC=0xFF;
  
  PORTD=0x00;
  DDRD=0xFF;
  
while (1)
      {
      PORTC=~ss[PINA/10];
      PORTD=ss[PINA%10];
    }
}