//headers
#include <Serial.h>
#include <SoftwareSerial.h>


//global variables
long time_sec = 0;
long distance = 0;
const int RX = 6, TX = 7;
SoftwareSerial chair(RX, TX);


//function prototypes
int recieveTime();


//setup, looop
void setup()
{
    chair.begin(9600);
}

void loop()
{
    //
}

//function definitions
int recieveTime()
{
    if (chair.available())
    {
        String recieved = chair.readStringUntil('\n');
        time_sec = recieved.toInt();
        return 0;
    }
    else
        return 1;
}
