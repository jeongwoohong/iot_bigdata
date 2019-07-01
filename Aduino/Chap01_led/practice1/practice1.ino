#define DELAY_TIME 100

void setup(){
  for(int i=2;i<7;i++){
    pinMode(i,OUTPUT);
  }
}
void loop(){
  blinkLED(2,DELAY_TIME);
  blinkLED(3,DELAY_TIME);
  blinkLED(4,DELAY_TIME);
  blinkLED(5,DELAY_TIME);
  blinkLED(6,DELAY_TIME);
  blinkLED(5,DELAY_TIME);
  blinkLED(4,DELAY_TIME);
  blinkLED(3,DELAY_TIME);
}

void blinkLED(int pin, int delayTime){
  digitalWrite(pin, HIGH);
  delay(delayTime);
  digitalWrite(pin,LOW);
}
