
int AI = A1; 
int x= 0.0 ;
float volt = 0.0;
float IA= 0.0;
float RB = 0;
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
}

void loop() {
float volt=( x /1023.0)*5.0; 
Serial.print("\t");
Serial.print("AI voltage = ");
Serial.print(volt);
delay(100);
 x= analogRead (AI);
Serial.print("\t");
Serial.print("AI value= ");
Serial.println(x);
float IA=(5.0 - volt )/1000.0;
Serial.print("IA Value = ");
Serial.print(IA);
float RB= (volt/IA);
Serial.print("\t");
Serial.print("RB Value = ");
Serial.print(RB);
lcd.setCursor(0,0); 
lcd.print("Current = ");
lcd.println(IA);
lcd.setCursor (0,1);
lcd.print (" Bitvalue = ");
lcd.println(x);}
