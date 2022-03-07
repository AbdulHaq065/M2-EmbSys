#define MINIMUMLIGHT 300
int vib_pin=7;
const int buzzer = 9; //buzzer to arduino pin 9
int ldr=A0;//Set A0(Analog Input) for LDR.
int value=0;
int val;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(vib_pin,INPUT);
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}

void loop() {

  value=analogRead(ldr);
  val=digitalRead(vib_pin);
  AlarmSystem(val);
  AutoLight(value);

}
void AlarmSystem(int val)
{
  if(val==1)
  {
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
   }
   else
  noTone(buzzer);     // Stop sound...
  delay(1000); 
}
void AutoLight(int value)
{
    if(value<MINIMUMLIGHT)
  {
    digitalWrite(13,HIGH);
    delay(2000);//Makes the LED glow in Dark.
  }
  else
  {
    digitalWrite(3,LOW);
     delay(2000);//Turns the LED OFF in Light.
  }
}
