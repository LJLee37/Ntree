//headers
#include <Serial.h>
#include <LiquidCrystal.h>
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

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
    servo1.attach(2);
    servo2.attach(3);
    servo3.attach(4);
    servo4.attach(5);
    Serial.begin(9600);
    Serial.println("Enter an angle.");
}

void loop()
{
    lcdPrint(time_sec);
    if(analogRead(A0) > 200){
        if (Serial.available()){
        int angle = Serial.read();
        if(angle>=0 && angle<=180){
            servo1.write(angle);
            servo2.write(angle);
            servo3.write(angle);
            servo4.write(angle);
        }
    } else {
        // 실행 X
    }
    delay(10);
}

//function definitions
void lcdPrint(int time)
{
    lcd.setCursor(0,0);
    lcd.print("Sitting Time");
    lcd.setCursor(0,1);
    lcd.print("%d", time);
}
    

}

//function definitions

