#define numStrings 8

int actualString = 0;
int actualTime;
int intervalON = 8000;
int intervalOFF = 10000;
boolean state = 0;

const int pins[numStrings] = {
  9,8,7,6,5,4,3,2
};

const int timeON[numStrings] = {
  7000,9000,10000,10000,5000,6500,8000,10000
};

void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);

  for(int i=0;i<numStrings;i++){
    pinMode(pins[i],OUTPUT);
  }

  actualTime = millis();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(state==0 && millis()<(actualTime+timeON[actualString]))
  {
    int left = (actualTime+timeON[actualString])-millis();
    Serial.print("ON ");
    Serial.print(" : ");
    Serial.print(actualString);
    Serial.print(" : ");
    Serial.println(left);
    analogWrite(pins[actualString],255);
  }else if (state==0 && millis()>(actualTime+intervalON)){
    actualTime = millis();
    state=1;
  }

  if(state==1 && millis()<(actualTime+intervalOFF))
  {
    int left = (actualTime+intervalOFF)-millis();
    Serial.print("OFF ");
    Serial.print(" : ");
    Serial.print(actualString);
    Serial.print(" : ");
    Serial.println(left);
    analogWrite(pins[actualString],0);
  }else if (state==1 && millis()>(actualTime+intervalOFF)){
    actualTime = millis();
    state=0;
    actualString++;
    if(actualString>=8){
      actualString=0;
      Serial.println("stop");
      delay(10000);
    }
  }
}
