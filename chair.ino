//headers
#include <SoftwareSerial.h>


//global variables
long time_sec = 0;
const int RX = 6, TX = 7;
SoftwareSerial desk(RX, TX);
int forcesen = 0;


//function prototypes
int sendTime();


//setup, looop
void setup()
{
    desk.begin(9600);
    pinMode(13, INPUT);
}

void loop()
{
    forceSen = digitalRead(13);
    
    if (forceSen == HIGH)
    {
        time_sec++;
        delay(1000);
    }
    else
    {
        
    }
}

//function definitions
int sendTime()
{
    desk.println(time_sec);
}
