//headers
#include <Serial.h>


//global variables
long time_sec = 0;


//function prototypes


//setup, looop
void setup()
{
    pinMode(13, INPUT);
}

void loop()
{
    forceSen = digitalRead(13);
    if (forceSen == HIGH)
    {
        time_sec++;
    }
}

//function definitions
