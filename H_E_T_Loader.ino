/* 3 IR limit-switch on one Analog pin Example
  */
   
//Constants
const int irAnalogPin = A3;
int pos = 0;

//Variables
int buttonValue; //Stores analog value when button is pressed


void setup()
{
  pinMode(irAnalogPin, INPUT);
  
}

void loop()
{
  buttonValue = analogRead(A3); //Read analog value from A3 pin
  Serial.print(buttonValue);
  
  //For 1st button:
  if (buttonValue>=1010 && buttonValue<=1015){
    if (pos!=1)
        pos=1;
        else pos=0;
    Serial.println(pos);
  }
  //For 2nd button:
  else if (buttonValue>=1000 && buttonValue<=1008){
    if (pos!=2)
        pos=2;
        else pos=1;
    Serial.println(pos);
  }
  //For 3rd button:
  else if (buttonValue>=990  && buttonValue<=998){
    if (pos!=3)
        pos=3;
        else pos=2;
    Serial.println(pos);
  }
  
 
  delay(10);
}
