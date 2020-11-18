//headers
#include <Serial.h>


//global variables
long time_sec = 0;
long distance = 0;

//function prototypes


//setup, looop
void setup()
{
    pinMode(A0, INPUT);
}

void loop()
{
    if(digitalRead(A0) == HIGH){
        // 책상높이를 조절하는 함수 실행
    } else {
        // 실행 X
    }
    delay(10);
}

//function definitions
