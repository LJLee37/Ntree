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
    Serial.println("Enter an angle.");
}

void loop()
{
    if (Serial.available()){
        int angle = Serial.read();
        if(angle>=0 && angle<=180){
            servo1.write(angle);
            servo2.write(angle);
            servo3.write(angle);
            servo4.write(angle);
        }
        
        
        
    }
    

}

//function definitions

