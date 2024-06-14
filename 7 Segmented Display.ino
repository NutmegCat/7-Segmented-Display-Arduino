// Pin connections for common cathode 7-segment display const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8, G};

void setup() {
// Set segment pins as OUTPUT for (int i = 0; i < 8; i++) {
pinMode(segmentPins[i], OUTPUT);
}

}
void loop() {
// Display Hexadecimal digits in ascending order displayHexAscending();
delay(1000); // Wait for 1 second


// Display Hexadecimal digits in descending order displayHexDescending();
delay(1000); // Wait for 1 second
}
void displayHexAscending() { for (int i = 0; i <= 15; i++) {
displayHexDigit(i);
delay(500); // Display each digit for 0.5 seconds
}
}
void displayHexDescending() { for (int i = 15; i >= 0; i--) {
 
displayHexDigit(i);
delay(500); // Display each digit for 0.5 seconds
}
}
void displayHexDigit(int digit) {
// Hexadecimal values for common cathode 7-segment display const int hexValues[][8] = {
{1, 1, 1, 1, 1, 1, 0, 0}, // 0
{0, 1, 1, 0, 0, 0, 0, 0}, // 1
{1, 1, 0, 1, 1, 0, 1, 0}, // 2
{1, 1, 1, 1, 0, 0, 1, 0}, // 3
{0, 1, 1, 0, 0, 1, 1, 0}, // 4
{1, 0, 1, 1, 0, 1, 1, 0}, // 5
{1, 0, 1, 1, 1, 1, 1, 0}, // 6
1, 1, 1, 0, 0, 0, 0, 0}, // 7
{1, 1, 1, 1, 1, 1, 1, 0}, // 8
{1, 1, 1, 1, 0, 1, 1, 0}, // G
{1, 1, 1, 0, 1, 1, 1, 0}, // A
{0, 0, 1, 1, 1, 1, 1, 0}, // B
{1, 0, 0, 1, 1, 1, 0, 0}, // C
{0, 1, 1, 1, 1, 0, 1, 0}, // D
{1, 0, 0, 1, 1, 1, 1, 0}, // E
{1, 0, 0, 0, 1, 1, 1, 0} // F
    };
// Display the specified hexadecimal digit for (int j = 0; j < 8; j++) {
digitalWrite(segmentPins[j], hexValues[digit][j]);
    }
}
