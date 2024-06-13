/*
    Project name : 3-color LED module
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-3-color-led-module
*/

const int redLEDPin = 9;    // Pin connected to the red LED
const int greenLEDPin = 10; // Pin connected to the green LED
const int blueLEDPin = 11;  // Pin connected to the blue LED
const int delayTime = 1000; // Delay time in milliseconds

void setup() {
  pinMode(redLEDPin, OUTPUT);    // Set the red LED pin as OUTPUT
  pinMode(greenLEDPin, OUTPUT);  // Set the green LED pin as OUTPUT
  pinMode(blueLEDPin, OUTPUT);   // Set the blue LED pin as OUTPUT
  Serial.begin(9600);            // Initialize serial communication
}

void loop() {
  showColor(255, 0, 0); // Red
  delay(delayTime);
  showColor(0, 255, 0); // Green
  delay(delayTime);
  showColor(0, 0, 255); // Blue
  delay(delayTime);
  showColor(255, 255, 0); // Yellow
  delay(delayTime);
  showColor(0, 255, 255); // Cyan
  delay(delayTime);
  showColor(255, 0, 255); // Magenta
  delay(delayTime);
  showColor(255, 255, 255); // White
  delay(delayTime);
  showColor(0, 0, 0); // Off
  delay(delayTime);
}

// Function to display a color on the RGB LED
void showColor(int red, int green, int blue) {
  analogWrite(redLEDPin, red);
  analogWrite(greenLEDPin, green);
  analogWrite(blueLEDPin, blue);

  Serial.print("Red: ");
  Serial.print(red);
  Serial.print(", Green: ");
  Serial.print(green);
  Serial.print(", Blue: ");
  Serial.println(blue);
}
