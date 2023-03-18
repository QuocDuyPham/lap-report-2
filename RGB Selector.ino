int RED= 10;            // PIN RED to pin 9 
int GREEN = 11;        // PIN GREEN to pin 
int BLUE = 12;         // PIN BLUE to pin 11 
void setup() {
 for (int x=0 ; x<=12 ; x++) {  // USE FOR LOOP to  goes through pin 10 to 12
pinMode(x, OUTPUT);         // Each pin is an OUTPUT
 }
}

void loop() {                  // "setColor" changes the value for PIN RED, PIN GREEN and PIN BLUE
  setColor(255,255,255);       // code for White color

  // setColor(255, 0,0 );   code for RED color
  // setColor(0, 255, 0);     Code for GREEN color
  // setColor(0, 0, 255);      Code for BLUE  color 
}

void setColor(int redValue, int greenValue, int blueValue) {   // It brings the written value from "setColor" in void loop
  analogWrite(RED, redValue);        // It writes the value of PIN RED into the value is set in redValue
  analogWrite(GREEN, greenValue);    // It writes the value of PIN GREEN into the value is set in greenValue
  analogWrite(BLUE, blueValue);      // It writes the value of PIN BLUE into the value is set in blueValue
}