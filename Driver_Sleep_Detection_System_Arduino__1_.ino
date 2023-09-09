#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address (may vary depending on your display module)
int lcdAddress = 0x3F;

// Set the LCD dimensions (rows, columns)
int lcdColumns = 16;
int lcdRows = 2;

// Create an instance of the LiquidCrystal_I2C library
LiquidCrystal_I2C lcd(lcdAddress, lcdColumns, lcdRows);

void setup() {
  // Initialize the LCD
  lcd.begin(lcdColumns, lcdRows);
  // Turn on the backlight (if available)
  lcd.backlight();
  
  // Print "Hello, World!" to the LCD
  lcd.setCursor(0, 0); // Set the cursor to the first row, first column
  lcd.print("Hello,");
  lcd.setCursor(0, 1); // Set the cursor to the second row, first column
  lcd.print("World!");
}

void loop() {
  // Nothing to do here in this example
}