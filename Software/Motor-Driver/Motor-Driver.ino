//MEROBOT Motor Driver

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);

 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);

 
  delay(5000); 

  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);

 
  delay(5000);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);

 
  delay(5000);                     // wait for a second
}
