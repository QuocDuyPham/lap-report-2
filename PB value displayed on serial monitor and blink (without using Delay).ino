const int ledPin1 = 7;     // SET ledPin1 to PIN 4 
const int ledPin2 = 8;    // SET ledPin2 to PIN 5 
const int buttonPin = 9;  // SET buttonPin to PIN 2 
int PBState = 0;      // set the PB state as 0 
int ledState = LOW;       // ledState used to turn on or turn off the LED
unsigned long previousMillis = 0;  // This stores last time LED was updated
const long interval = 1000;  // This is the interval at which to blink in milliseconds
void setup() {
  Serial.begin(9600);              
  pinMode(ledPin1, OUTPUT);            // SET ledPin as an OUTPUT
  pinMode(ledPin2, OUTPUT);           // SET ledPin2 as an OUTPUT
  pinMode(buttonPin, INPUT_PULLUP);   // SET buttonPin an an INPUT_PULLUP 
}
void loop() {       

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(ledPin1, ledState);  // Set the LED with the ledState of the variable
  }

PBState= digitalRead(buttonPin); // Read the buttonPin value and store it to buttonState

if (PBState == HIGH) {            // If button is HIGH or unpressed     
    digitalWrite(ledPin2, HIGH);      // turn LED ON
  } else {                            // If button is pressed 
    digitalWrite(ledPin2, LOW);       // turn LED OFF
  }
Serial.print("PB value = ");          // Print "PB Value =" on serial monitor
Serial.println(PBState);          //Then the value from buttonState
}
