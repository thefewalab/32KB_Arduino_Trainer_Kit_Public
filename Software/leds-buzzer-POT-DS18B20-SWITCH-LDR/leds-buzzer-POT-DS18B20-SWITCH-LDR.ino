#include <OneWire.h>
#include <DallasTemperature.h>
#define buzzer 2
#define led1 10
#define ledpwm 13
#define ONE_WIRE_BUS 6
int PotPin = A1;
#define ldr A0

#define button 8
OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(ledpwm, OUTPUT);
  sensors.begin();

}

// the loop function runs over and over again forever
void loop() {
  Serial.println("Testing Buzzer, LEDs, Pot, Temperature, Switch, LDR");

  Serial.println("1. Buzzer and LEDs");
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

  delay(1000);
  Serial.println("-----------------------");

  Serial.println("2. Potentiometer");
  int  PotValue = analogRead(PotPin);
  Serial.println(PotValue);
  delay(1000);
  Serial.println("-----------------------");


  Serial.println("3. Temperature Sensor");
  Serial.print(" Requesting temperatures...");
  sensors.requestTemperatures(); // Send the command to get temperature readings
  Serial.println("DONE");
  Serial.print("Temperature is: ");
  Serial.println(sensors.getTempCByIndex(0));
  delay(1000);
  Serial.println("-----------------------");


  Serial.println("4. Digital Switch");
  Serial.println("Press button");
  int sw_value = digitalRead(button);
  Serial.println(sw_value);
  delay(3000);
  Serial.println("-----------------------");


  Serial.println("5. LDR");
  int ldrValue = analogRead(ldr);
  Serial.print("Value of ldr= ");
  Serial.println(ldrValue);
  delay(300);
  Serial.println("-----------------------");
  Serial.println("Done Testing, Please wait 5 seconds");
  delay(5000);
  Serial.println("-----------------------");




}
