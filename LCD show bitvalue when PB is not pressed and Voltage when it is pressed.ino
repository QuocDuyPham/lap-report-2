
// include the lbrary code:
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2, 3, 4, 5, 11, 12);
int AI = A1;// set int as Ao port
int val = 0; // storing bit
float volt = 0.0;// storing bit of volt 
int PBvalue = 0;

void setup() {
lcd.begin(16,2); // set up the available space on the LCD display. 16 colums and 2 rows. 
Serial.begin(9600);
pinMode(13, INPUT_PULLUP); //set PIN 13 to the inputpull up 
}

void loop() {
PBvalue = digitalRead(13); // Push button value equal to the digital value of pin 13 
val = analogRead(AI); // Read the analog value of AI 
float volt = (val * 5.0) / 1023.0; // convert that analog value to voltage value
Serial.print ("val value ="); // print the line : val value = 
Serial.print (val ); // print the value of AI
Serial.print ( "volt value ="); //print out the line volt value = 
Serial.println (volt); // print the voltage value 
Serial.print ("\t Button state=");
Serial.print (PBvalue); // print out the Push button value 
if (PBvalue == 0){ // condition if Push button value is 0 
  lcd.setCursor(0, 0); // set the postion where the lcd gonna print colum 0 row 0 
  lcd.print("Volt="); 
  lcd.print(volt); // print out volttage value of the lcd
}
if (PBvalue == 1) { // condition if Push button value is 1
  lcd.setCursor(0, 0);// set the postion where the lcd gonna print colum 0 row 0 
  lcd.print("Val=");
  lcd.print(val); // print out the value of AI
}

}

