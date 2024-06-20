const int PUSH_BUTTON=2;
const int RED_LED=3;
const int S_A=4;
const int S_B=5;
const int S_C=6;
const int S_D=7;
int R;
void setup(){
pinMode(PUSH_BUTTON, INPUT_PULLUP);
pinMode(RED_LED, OUTPUT);
pinMode(S_A, OUTPUT);
pinMode(S_B, OUTPUT);
pinMode(S_C, OUTPUT);
pinMode(S_D, OUTPUT);
}
int count=0;
void loop() {
  // put your main code here, to run repeatedly: 
  display(count);
R=digitalRead(PUSH_BUTTON);//pushbutton off
if(R==1)
{
digitalWrite(RED_LED ,0);
}
else//pushbutton on
{
digitalWrite(RED_LED ,1);
delay(1000);
count ++;
if(count>9)
count = 0;
}
}
//////////////////////////////////////////////////////////////////////////
void display(unsigned int n)
{
//clear the display
digitalWrite(S_A,0);
digitalWrite(S_B,0);
digitalWrite(S_C,0);
digitalWrite(S_D,0);

switch(n)
{
   case 0:digitalWrite(S_A,0);
       digitalWrite(S_B,0);
       digitalWrite(S_C,0);
       digitalWrite(S_A,0);
       break;

   case 1:digitalWrite(S_A,0);
       digitalWrite(S_B,0);
       digitalWrite(S_C,0);
       digitalWrite(S_D,1);
       break;

case 2:digitalWrite(S_A,0);
       digitalWrite(S_B,0);
       digitalWrite(S_C,1);
       digitalWrite(S_D,0);
       break;

case 3:digitalWrite(S_A,0);
       digitalWrite(S_B,0);
       digitalWrite(S_C,1);
       digitalWrite(S_D,1);
       break;

case 4:digitalWrite(S_A,0);
       digitalWrite(S_B,1);
       digitalWrite(S_C,0);
       digitalWrite(S_D,0);
       break;

case 5:digitalWrite(S_A,0);
       digitalWrite(S_B,1);
       digitalWrite(S_C,0);
       digitalWrite(S_D,1);
      break;

case 6:digitalWrite(S_A,0);
       digitalWrite(S_B,1);
       digitalWrite(S_C,1);
       digitalWrite(S_D,0);
       break;


case 7:digitalWrite(S_A,0);
       digitalWrite(S_B,1);
       digitalWrite(S_C,1);
       digitalWrite(S_D,1);
       break;

case 8:digitalWrite(S_A,1);
       digitalWrite(S_B,0);
       digitalWrite(S_C,0);
       digitalWrite(S_D,0);
       break;

case 9:digitalWrite(S_A,1);
       digitalWrite(S_B,0);
       digitalWrite(S_C,0);
       digitalWrite(S_D,1);
       break;

default:digitalWrite(S_A,1);
}
}