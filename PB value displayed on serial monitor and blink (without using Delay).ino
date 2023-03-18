const int ledPin = 4;     // Assign ledPin to 4 as integer
const int ledPin2 = 5;    // Assign ledPin2 to 5 as integer
const int buttonPin = 2;  // Assign buttonPin to 2 as integer
int buttonState = 0;      // buttonState used to set the button
int ledState = LOW;       // ledState used to set the LED
unsigned long previousMillis = 0;  // This stores last time LED was updated
const long interval = 1000;  // This is the interval at which to blink in milliseconds
void setup() {
  Serial.begin(9600);                 //serial communication at 9600 bits per second
  pinMode(ledPin, OUTPUT);            // Assign ledPin as an OUTPUT
  pinMode(ledPin2, OUTPUT);           // Assign ledPin2 as an OUTPUT
  pinMode(buttonPin, INPUT_PULLUP);   // Assign buttonPin an an INPUT_PULLUP or internal pull up
}
void loop() {        // Code here will run all the time

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(ledPin, ledState);  // Set the LED with the ledState of the variable
  }

buttonState = digitalRead(buttonPin); // Read the buttonPin value and store it to buttonState

if (buttonState == HIGH) {            // If button is HIGH or unpressed     
    digitalWrite(ledPin2, HIGH);      // turn LED ON
  } else {                            // If button is pressed 
    digitalWrite(ledPin2, LOW);       // turn LED OFF
  }
Serial.print("PB value = ");          // Print "PB Value =" on serial monitor
Serial.println(buttonState);          //Then the value from buttonState
}
