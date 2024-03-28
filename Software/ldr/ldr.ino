#define ldr A0
void setup() {
Serial.begin(9600);
}

void loop() {
int a=analogRead(ldr);
Serial.print("Value of A0= ");
Serial.println(a);
delay(300);

}
