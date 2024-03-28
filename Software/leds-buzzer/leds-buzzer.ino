#define buzzer 2
#define led1 10
#define ledpwm 13

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(buzzer, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(ledpwm, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(300);

  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(100);

  digitalWrite(ledpwm, HIGH);
  delay(300);
  digitalWrite(ledpwm, LOW);
  delay(100);
}
