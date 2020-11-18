//headers
#include <Serial.h>


//global variables
long time_sec = 0;

forceSen = digitalRead(13);


//function prototypes


//setup, looop
void setup()
{
    pinMode(13, INPUT);
}

void loop()
{
    if (forceSen == HIGH)
    {
        time_sec++;
        delay(1000);
    }
}

//function definitions
