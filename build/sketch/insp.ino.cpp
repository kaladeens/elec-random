#include <Arduino.h>
#line 6 "C:\\Users\\Sam\\Documents\\electrical\\insp\\joystick.ino"
void setup();
#line 14 "C:\\Users\\Sam\\Documents\\electrical\\insp\\joystick.ino"
void loop();
#line 0 "C:\\Users\\Sam\\Documents\\electrical\\insp\\joystick.ino"
#line 1 "C:\\Users\\Sam\\Documents\\electrical\\insp\\insp.ino"

#line 1 "C:\\Users\\Sam\\Documents\\electrical\\insp\\joystick.ino"

int xValuePin = A0;
int yValuePin = A1;
int buttonPin = 2;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600); // open the serial port at 9600 bps:
    pinMode(buttonPin, INPUT_PULLUP); 


}

void loop(){
        int xValue = analogRead(xValuePin);
        int yValue = analogRead(yValuePin);
        int bValue = digitalRead(buttonPin);
        if (bValue == HIGH){
          Serial.print("yurr high");

        }
        else{
          Serial.print("NAAA LOW");
        }
        // Serial.print("X: ");
        // Serial.println(xValue);
        // Serial.print("Y: ");
        // Serial.println(yValue);
        
        Serial.print("\n");
}
