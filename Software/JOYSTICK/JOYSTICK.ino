#define JoyUp  A2
#define JoyRight  A3
#define Joy 9
void setup() {

  Serial.begin(9600);
  pinMode(9, INPUT_PULLUP);
}

void loop() {
  int  Pot1 = analogRead(JoyUp);
  int  Pot2 = analogRead(JoyRight);
  int Joy1 = digitalRead(Joy);

  Serial.print(Pot1);
  Serial.print(",");
  Serial.print(Pot2);
  Serial.print(",");
  Serial.println(Joy1);

  delay(200);


}
