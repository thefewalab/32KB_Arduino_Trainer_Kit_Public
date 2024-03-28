#define button 8
void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sw_value = digitalRead(button);
  Serial.println(sw_value);
  //if (sw_value == 0) {
    //digitalWrite(10, HIGH);
    //delay(4000);
  //}
//  delay(300);
}
