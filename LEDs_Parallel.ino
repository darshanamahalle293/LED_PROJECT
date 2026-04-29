#define my_led1 8
#define my_led2 7
#define my_led3 4

void setup()
{
  pinMode(my_led1, OUTPUT);
  pinMode(my_led2, OUTPUT);
  pinMode(my_led3, OUTPUT);
}

void loop()
{
  digitalWrite(my_led1, HIGH);
  digitalWrite(my_led2, LOW);       // LED1 ON
  digitalWrite(my_led3, LOW);
  delay(1000);
  
  digitalWrite(my_led1, LOW);
  digitalWrite(my_led2, HIGH);        // LED2 OFF
  digitalWrite(my_led3, LOW);
  delay(1000);

  digitalWrite(my_led1, LOW);
  digitalWrite(my_led2, LOW);       // LED3 ON
  digitalWrite(my_led3, HIGH);
  delay(1000);
}