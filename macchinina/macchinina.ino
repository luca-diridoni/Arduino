//il gnd del driver, di arduino e della batteria devono essere unici (tutti collegati insieme)
const int enA=6, enB=3;
const int in1=2, in2=4;   //sinistra
const int in3=5, in4=7;   //destra
char comando;

void avanti(){
  analogWrite(enA,150);
  analogWrite(enB,150);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void destra(){
  analogWrite(enA,250);
  analogWrite(enB,250);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void sinistra(){
  analogWrite(enA,250);
  analogWrite(enB,250);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void fermo(){
  analogWrite(enA,150);
  analogWrite(enB,150);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
void indietro(){
  analogWrite(enA,150);
  analogWrite(enB,150);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void setup() {
  Serial.begin(9600);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

//per andare avanti
  analogWrite(enA,150);
  analogWrite(enB,150);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
//fino a qui
}

void loop() {
  if (Serial.available() > 0) {
    char comando = Serial.read();  // legge il carattere inviato
    if (comando == 'w') avanti();
    else if (comando == 's') indietro();
    else if (comando == 'a') sinistra();
    else if (comando == 'd') destra();
    else if (comando == 'x') fermo(); // usa 'x' per fermare
  }
}





