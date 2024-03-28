#define JoyUp  A2
#define JoyRight  A3
#define Joy 9
int xMap;
int yMap;

void setup() {

  Serial.begin(9600);
  pinMode(9, INPUT_PULLUP);

}

void loop() {
  int  Pot1 = analogRead(JoyUp);
  int  Pot2 = analogRead(JoyRight);
  int Joy1 = digitalRead(Joy);

  xMap = map(Pot1, 0, 1023, -512, 512);
  yMap = map(Pot2, 0, 1023, -512, 512);

  Serial.print(xMap);
  Serial.print(",");
  Serial.print(yMap);
  Serial.print(",");
  Serial.println(Joy1);

  delay(200);


}
