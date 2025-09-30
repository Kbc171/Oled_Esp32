#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128  // OLED width in pixels
#define SCREEN_HEIGHT 64  // OLED height in pixels

// Create display object (using I2C, default address 0x3C for SSD1306)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Initialize serial for debugging
  Serial.begin(115200);

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Halt if failed
  }

  // Clear buffer
  display.clearDisplay();

  // Set text size and color
  display.setTextSize(1);      
  display.setTextColor(SSD1306_WHITE);  

  // Set cursor to top-left
  display.setCursor(0, 0);   

  // Print text
  display.println("Hello World!");

  // Display the content
  display.display();  
}

void loop() {
  // Nothing here
}
