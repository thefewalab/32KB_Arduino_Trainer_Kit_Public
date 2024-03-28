#define ldr A0
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

}

void loop() {

 float a=analogRead(ldr);
Serial.print("Value of A0= ");
Serial.println(a);

  
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(20, 20); //
  // Display static text
  display.println("LIGHT INTENSITY");
  
  display.setTextSize(2.5);
  display.setCursor(30, 30);
  // Display static text
  display.print((a/1024)*100);
  
  //display.println(" ");
  display.cp437(true);
  //display.write(167);
  display.println("%");
  display.display();
  delay(2000);

}
