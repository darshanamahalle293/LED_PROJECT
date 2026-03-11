// This is my First IOT Program
#define my_led 7 //global declaration, LED pin no.7


void setup() {
  //initialize digital pin LED_BUTTON as an output
  pinMode(my_led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(my_led, HIGH);   // turn the LED on (HIGH is the voltage level)
  
                   
}
