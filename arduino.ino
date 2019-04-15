#include <Servo.h> 

int powderPin = 13;
int bobaPin = 2;
int conveyorPin = 3;

Servo Powder;
Servo Boba;
Servo Conveyor;

void setup() {

      Powder.attach(powderPin);
      Boba.attach(bobaPin); 
      Conveyor.attach(conveyorPin);
  
      Serial.begin(9600);
      Serial.println("Hi!, I am Arduino");
}

void loop() {

    char data = 0;

    while(Serial.available()){ data = Serial.read(); }

        if(data == '1'){ //Conveyor Belt
            Serial.println("MOVING CONVEYOR");
            Conveyor.write(25);
            delay(2000);
            Conveyor.write(90);
        }

        if(data == '2'){ //Powder
            Serial.println("RELEASING POWDER");
            Powder.write(180);
            delay(1000);
            Powder.write(90);
            delay(100);
        }

        if(data == '3'){ //Coffee Machine`
            Serial.println("TURNING ON COFFEE MACHINE");
        }

        if(data == '4'){ //Bubbles
          Serial.println("RELEASING BUBBLES");
            Boba.write(180);
            delay(1000);
            Boba.write(90);
            delay(100);  
        }
         
}
