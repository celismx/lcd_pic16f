#define _XTAL_FREQ 8000000

#include <xc.h>
#include <stdlib.h>     /* srand, rand */

#include "lcd.h"
#include "math.h"
#include "funciones.h"
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
  float enteros;
  float decimales;
  float entero;
  float decimal;
  float valor1;
  float valor2;
  float valor3;
  float valor4;
  float Litros;
//end global variables
int main()
{
    srand((NULL));

  float a; //
  pic_init();
  Lcd_Init();
 Lcd_Clear();
  __delay_ms(5);
  Lcd_Set_Cursor(1,1);
  __delay_ms(5);
  Lcd_Write_String("Proyecto Antirobo");
  __delay_ms(5);
  Lcd_Set_Cursor(2,1);
  __delay_ms(5);
  Lcd_Write_String("de gasolineras");
  __delay_ms(2000);
  Lcd_Clear();
  __delay_ms(5);

  while(TRUE)
  {
      a=0;
      Litros=05.09;

 
  decimal = modf(Litros, &entero);
  decimal = (decimal*10);
  entero  = (entero/10);
  valor2  = modf(entero, &valor1);
  valor2  = (valor2*10)+48;
  valor1  = valor1+48;
  valor4  = modf(decimal, &valor3);
  valor4  = (valor4*10)+48;
  valor3  = valor3+48;
  Lcd_Clear();
  Lcd_Set_Cursor(2,1);
  Lcd_Write_String("Total=");
  __delay_ms(10);
  Lcd_Write_Char(valor1);
  __delay_ms(10);
  Lcd_Write_Char(valor2);
  __delay_ms(10);
  Lcd_Write_String(".");
  __delay_ms(10);
  Lcd_Write_Char(valor3);
  __delay_ms(10);
  Lcd_Write_Char(valor4);
  __delay_ms(10);
  Lcd_Write_String(" Lts.");
  __delay_ms(3000);
   Lcd_Clear();
   Lcd_Set_Cursor(1,1);
   Lcd_Write_String("Midiendo..");
   Lcd_Set_Cursor(2,1);
   Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);
        Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);
        Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);
        Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);
        Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);
        Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);

      Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);
        Lcd_Write_String(".");
     __delay_ms(100);
  Lcd_Write_String(".");
     __delay_ms(100);
   Lcd_Clear();
  }
  return 0;
}