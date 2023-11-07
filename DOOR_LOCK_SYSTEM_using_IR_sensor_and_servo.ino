#include <Servo.h>
#define IR A0
Servo servo;
int angle = 10;

void setup() {
    pinMode(IR, INPUT);
    servo.attach(3);
    servo.write(angle);
    Serial.begin(9600);
}
void loop() 
{ 
  Serial.println(analogRead(IR));
  delay(1000);
    if(analogRead(IR) < 512){ 
    for(angle = 10; angle < 180; angle+=5)  
    {                                  
        servo.write(angle);               
                                   
    }
    delay(2000);
    for(angle = 180; angle > 10; angle-=5)  
    {                                  
        servo.write(angle);               
                              
    }
    }
    
}
