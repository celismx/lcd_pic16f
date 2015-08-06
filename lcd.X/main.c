#define _XTAL_FREQ 8000000

#include <xc.h>

#include "lcd.h"

#define TRUE 1
// BEGIN CONFIG
#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON // Brown-out Reset Enable bit (BOR enabled)
 #pragma config CPD = OFF // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)
//END CONFIG
//global variables
  unsigned int estado;
  unsigned int TiempoPulso;


//end global variables
int main()
{
  unsigned int a; //
  pic_init();
  Lcd_Init();
  
  
  
  
  while(TRUE)
  {
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Proyecto Antirobo");
    Lcd_Set_Cursor(2,1);
    Lcd_Write_String("de gasolineras");
    __delay_ms(1000);
    Lcd_Clear();

    int numero;
    for(numero = 0; numero<= 10; numero++)
    {
       Lcd_Set_Cursor(1,1);
       Lcd_Write_String("midiendo litros:");
       Lcd_Set_Cursor(2,1);
       int NuevaVar = numero+48;
       Lcd_Write_Char(NuevaVar);
       __delay_ms(1000);
       Lcd_Clear();
    }
    Lcd_Clear();

    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Hecho por");
    Lcd_Set_Cursor(2,1);
    Lcd_Write_String("R. Celis");
    __delay_ms(1000);
    Lcd_Clear();
 
  }
  
  return 0;
}