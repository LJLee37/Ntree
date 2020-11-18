//headers
#include <SoftwareSerial.h>


//global variables
long time_sec = 0;
const int RX = 6, TX = 7;
SoftwareSerial desk(RX, TX);


//function prototypes
int sendTime();


//setup, looop
void setup()
{
    desk.begin(9600);
}

void loop()
{
    //
}

//function definitions
int sendTime()
{
    desk.println(time_sec);
}
