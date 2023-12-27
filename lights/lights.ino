
const int greenPin = 10;
const int bluePin = 11;
const int redPin = 9;
const int xPin = A0;
const int yPin = A1;
const int swPin = 13;

void setup(){
    // initialize the pins
    Serial.begin(115200);
    pinMode(bluePin, OUTPUT);
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(xPin, INPUT);
    pinMode(yPin, INPUT);
    pinMode(swPin, INPUT_PULLUP);
}


void loop(){
    int xValue = analogRead(xPin);
    int yValue = analogRead(yPin);
    int swValue = digitalRead(swPin);
    changeColour(xValue, yValue, swValue);

}

void changeColour(int xValue,int yValue, int swValue){
    if(swValue == 0){
        // turn off all lights
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 0);
    }
    else{
        // map the values to the range 0-255
        int topC = map(yValue, 1023, 512, 255, 0);
        int rightC = map(xValue, 512, 1023, 0, 255);
        int leftC = map(xValue, 512, 0, 0, 255);
        int botC = map(yValue, 0, 512, 255, 0);
       
       // filter out values that are out of range and replace with stock values
        if(topC < 0){
            topC = 0;
        }
        if(rightC < 0){
            rightC = 0;
        }
        if(leftC < 0){
            leftC = 0;
        }
        if (botC < 6){
            botC = 0;
        }
        if (botC > 255){
            botC = 255;
        }
        if(topC > 255){
            topC = 255;
        }
        if(rightC > 255){
            rightC = 255;
        }
        if(leftC > 255){
            leftC = 255;
        }
        if (topC == 0 && rightC == 0 && leftC == 0 && botC == 0){
            topC = 255;
            rightC = 255;
            leftC = 255;
        }
        // set the colours
        analogWrite(redPin, topC);
        analogWrite(greenPin, rightC);
        analogWrite(bluePin, leftC);
       
    }
}