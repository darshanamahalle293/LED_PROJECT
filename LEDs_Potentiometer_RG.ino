#define pot A5
#define redLED 8
#define greenLED 7


void setup() {
Serial.begin(9600);
pinMode(pot, INPUT);
pinMode(redLED, OUTPUT);  //pin type
 pinMode(greenLED, OUTPUT);
}
 
 void loop(){    
int x = analogRead(pot);
Serial.print("Pot Value=");
Serial.println(x);
if (x > 100)
{
  digitalWrite(redLED, HIGH);  // RED ON
digitalWrite(greenLED, LOW);  // GREEN OFF
 
}
else{
   digitalWrite(redLED, LOW);  // RED OFF
    digitalWrite(greenLED, HIGH);  // GREEN ON

}

 }
