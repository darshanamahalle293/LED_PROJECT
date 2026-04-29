#define pot A5
#define redLED 8
#define greenLED 7
#define yellowLED 4


void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int x=analogRead(pot);
  Serial.print("Pot Value=");
   Serial.println(x);
 
  if(x<100)
  {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    Serial.print("Red ON");
  }
  
  else if(x>=100&&x<200)
  {
     digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    Serial.print("Green ON");
  }
  
  else if(x>=200&&x<300)
  {
     digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    Serial.print("Yellow ON");
  }
  
  else
  {
     digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    Serial.print("All OFF");
  }
  delay(1000);
}