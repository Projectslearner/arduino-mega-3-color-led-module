/*
    Project name : 3-color LED module
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-3-color-led-module
*/

const int redLEDPin = 9;    // Pin connected to the red LED
const int greenLEDPin = 10; // Pin connected to the green LED
const int delayTime = 1000; // Delay time in milliseconds

void setup() {
  pinMode(redLEDPin, OUTPUT);    // Set the red LED pin as OUTPUT
  pinMode(greenLEDPin, OUTPUT);  // Set the green LED pin as OUTPUT
  Serial.begin(9600);            // Initialize serial communication
}

void loop() {
  switchColors(); // Call the function to switch colors
  delay(delayTime); // Wait for a second before switching again
}

// Function to switch between red and green colors
void switchColors() {
  static bool isRedOn = true; // Static variable to keep track of the current color state

  if (isRedOn) {
    turnOnRedLED();
    Serial.println("Red LED is ON");
  } else {
    turnOnGreenLED();
    Serial.println("Green LED is ON");
  }

  isRedOn = !isRedOn; // Toggle the color state
}

// Function to turn on the red LED and turn off the green LED
void turnOnRedLED() {
  digitalWrite(redLEDPin, HIGH);   // Turn on red LED
  digitalWrite(greenLEDPin, LOW);  // Turn off green LED
}

// Function to turn on the green LED and turn off the red LED
void turnOnGreenLED() {
  digitalWrite(redLEDPin, LOW);    // Turn off red LED
  digitalWrite(greenLEDPin, HIGH); // Turn on green LED
}


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
