//headers
#include <Serial.h>
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

//global variables
long time_sec = 0;
long distance = 0;

//function prototypes


//setup, looop
void setup()
{
    servo1.attach(2);
    servo2.attach(3);
    servo3.attach(4);
    servo4.attach(5);
    Serial.begin(9600);
    
}

void loop()
{
    
    

}

//function definitions

