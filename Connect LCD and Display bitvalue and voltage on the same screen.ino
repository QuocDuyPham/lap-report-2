
int AI = A1; // set AI to the PIN A1
int x= 0.0 ; // the original value of x is 0
float volt = 0.0; // set the start value of voltage is 0.0
// include the library code:
#include <LiquidCrystal.h>
// set which pin we gonna use to connect to the lcd
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
}

void loop() {
x= analogRead (AI); // value of x will be the analog value that read from AI
Serial.print("\t \t"); // print a double space 
Serial.print("Bit value= ");// print out the line:  Bit value = 
Serial.println(x); // print out the Analog input value 
float volt=( x /1023.0)*5.0; // convert the but value to voltage value 
Serial.print(" voltage = "); // print out the line:  voltage value = 
Serial.print(volt); // print out volatge value
delay(100);
 
lcd.setCursor(0,0); // set the postion on the lcd start from colunm 0 of the first row
lcd.print("voltage = "); // lcd print the line: volatge = 
lcd.println(volt); // lcd print the voltage value
lcd.setCursor (0,1); // set the postion on the lcd start from colunm 0 of the second row
lcd.print (" Bitvalue = "); // lcd print the line: Bitvalue 
lcd.println(x);} // lcd print the Bit value