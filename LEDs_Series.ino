#define my_led 7 //global declaration, LED pin no.7


void setup() {
  //initialize digital pin LED_BUTTON as an output
  pinMode(my_led, OUTPUT);
}


void loop() {
  digitalWrite(my_led, HIGH);   // turn the LEDs on (HIGH is the voltage level)
  delay(1000);                  //wait for a second
  digitalWrite(my_led, LOW);    //turn the LEDs off by making the voltage LOW 
  delay(1000);                  //wait for a second
                   
}
