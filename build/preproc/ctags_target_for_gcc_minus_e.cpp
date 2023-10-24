# 1 "C:\\Users\\Sam\\Documents\\electrical\\insp\\insp.ino"
# 1 "C:\\Users\\Sam\\Documents\\electrical\\insp\\joystick.ino"

int xValuePin = A0;
int yValuePin = A1;
int buttonPin = 2;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600); // open the serial port at 9600 bps:
    pinMode(buttonPin, 0x2);


}

void loop(){
        int xValue = analogRead(xValuePin);
        int yValue = analogRead(yValuePin);
        int bValue = digitalRead(buttonPin);
        if (bValue == 0x1){
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
