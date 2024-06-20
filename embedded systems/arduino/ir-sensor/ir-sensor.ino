int IR=3;
int led=12;
void setup(){
  pinMode(IR,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int a;
  a=digitalRead(IR);
  if(a==HIGH)
  {
    digitalWrite(12,HIGH);
    Serial.println("obj detected");
    delay(500);
  }
  else
  {
    digitalWrite(12,LOW);
    Serial.println("obj not detected");
    delay(500);
  }

}