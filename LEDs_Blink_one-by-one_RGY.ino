#define redLED 8
#define greenLED 7
#define yellowLED 4


void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  
}


void loop()
{
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
}
