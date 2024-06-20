const int PUSH_BUTTON=12;
const int RED_LED=13;
int R;
void setup(){
pinMode(PUSH_BUTTON, INPUT_PULLUP);
pinMode(RED_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
R=digitalRead(PUSH_BUTTON);
if(R==1)
digitalWrite(RED_LED ,0);
else
digitalWrite(RED_LED ,1);
}
