#include <Servo.h>

const int trigPin = 11;
const int echoPin = 10;
const int destra=0;
const int sinistra=180;

long duration;
int distinCM;

Servo radarServo;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  radarServo.attach(13);
}
void loop() 
{
  for(int i=destra;i<=sinistra;i++)
  {
    radarServo.write(i);
    delay(10);
    
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distinCM = duration*0.034/2;
    
    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
  }
  
  for(int i=sinistra;i>=destra;i--)
  {
    radarServo.write(i);
    delay(10);
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distinCM = duration*0.034/2;

    Serial.print(i);
    Serial.print("*");
    Serial.print(distinCM);
    Serial.print("#");
  }
}
