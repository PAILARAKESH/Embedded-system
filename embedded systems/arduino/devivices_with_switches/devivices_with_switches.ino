int switch1=3;
int switch2=4;
int led=5;
int fan=6;
int switch11;
int switch22;
void setup() {
    // put your setup code here, to run once:
pinMode(switch1,INPUT);
pinMode(switch2,INPUT);
pinMode(led,OUTPUT);
pinMode(fan,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
switch11=digitalRead(switch1);
switch22=digitalRead(switch2);
if(switch11==1)
{
  digitalWrite(led,0);
}
if(switch11==0)
{
  digitalWrite(led,1);
}
if(switch22==1)
{
  digitalWrite(fan,0);
}
if(switch22==0)
{
  digitalWrite(fan,1);
}
}
