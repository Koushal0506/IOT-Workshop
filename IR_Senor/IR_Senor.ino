int in =7;
int led=13;
int buzzer=12;
int x;
void setup(){
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop(){
  x=digitalRead(in);
  Serial.println(x);
  delay(10);
  if(x==1){
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
  }
  else{
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
  }
}