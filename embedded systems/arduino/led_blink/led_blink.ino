const int red_led=2;
const int green_led=3;
const int blue_led=4;

void setup() {
  // put your setup code here, to run once:
pinMode(red_led,OUTPUT);
pinMode(green_led,OUTPUT);
pinMode(blue_led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red_led,1);
delay(300);
digitalWrite(green_led,1);
delay(300);
digitalWrite(blue_led,1);
delay(300);
digitalWrite(red_led,0);
delay(200);
digitalWrite(green_led,0);
delay(200);
digitalWrite(blue_led,0);
delay(200);
}
