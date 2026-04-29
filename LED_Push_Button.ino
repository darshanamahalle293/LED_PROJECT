#define my_led 2
#define button 7  //Global Declaration

void setup() {
   Serial.begin(9600);
   pinMode(my_led, OUTPUT);
   pinMode(button, INPUT);

}

void loop() {
 bool x = digitalRead(button);
 Serial.print("button status = ");
 Serial.println(x);
  if(x==1){
    digitalWrite(my_led, HIGH);
  }
  else{
    digitalWrite(my_led, LOW);
  }

}