/*
 * Control conductive thread heating. 
 * When button is pressed the current flow through the conductive thread.
 * Heating up the thread.
 * 
 */

int btnPin = 7;
int mosfetPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(btnPin,INPUT_PULLUP);
  pinMode(mosfetPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnState = digitalRead(btnPin); //reads a stores button state
  if(btnState==LOW){
    //button is pressed, so START heating up the conductive thread
    digitalWrite(mosfetPin,HIGH);
  }else{
    //button is released, so STOP heating up the conductive thread
    digitalWrite(mosfetPin,LOW);
  }
}
