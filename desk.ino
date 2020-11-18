//headers
#include <Serial.h>
#include <LiquidCrystal.h>

//global variables
long time_sec = 0;
long distance = 0;

LiquidCrystal lcd(13, 12, 8, 9, 10, 11); //LiquidCrystal lcd(RS, Enable, DB4, DB5, DB6, DB7);

//function prototypes
void lcdPrint(int time);

//setup, looop
void setup()
{
    lcd.begin(16, 2);
}

void loop()
{
    lcdPrint(time_sec);
}

//function definitions
void lcdPrint(int time)
{
    lcd.setCursor(0,0);
    lcd.print("Sitting Time");
    lcd.setCursor(0,1);
    lcd.print("%d", time);
}
