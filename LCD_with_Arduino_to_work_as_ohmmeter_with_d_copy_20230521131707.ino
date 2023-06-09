int AI = A1; // Set AI to the PIN A1
int x= 0.0 ; // set the intial value of x = 0
float volt = 0.0; // set the intial value of volt 0.o use float to read decimode value
float IA= 0.0; // set the intial value of Current of resistor A 0.0 use float to read decimode value
float RB = 0;  // set the intial value of Resistor B 0.0 use float to read decimode value
// include the library code:
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
byte Ohms[8] = { // This array creates a symbol of ohm unit on LCD
  B00000,
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B11011
};
byte vo[8] = {  // This array creates a symbol of voltage unit on LCD
  B00000,
  B00000,
  B00000,
  B10001,
  B10001,
  B10001,
  B01010,
  B00100
};

void setup() {
 lcd.begin(16, 2);
 Serial.begin(9600);
lcd.createChar(0, Ohms); // set the ohms symbol to byte  (0) 
lcd.createChar(1, vo); // set the voltage symbol to byte (1)
}
void loop() {
lcd.setCursor(12,1); // set position for the ohms symbol in colunm 12 row 1 on lcd
 lcd.write(byte(0)); // print out the ohms symbol on lcd
lcd.setCursor(12,0); // set position for the ohms symbol in colunm 12 row 0 on lcd
 lcd.write(byte(1)); // print out the voltage symbol on lcd
float volt=( x /1023.0)*5.0;  // convert the x value to volatge value 
Serial.print("\t\t");  // print a double space on serial monitor
Serial.print("voltage = "); // print out the lin voltage =
Serial.print(volt); // print out volatge value 
delay(100);
 x= analogRead (AI); // set the value of x to the analog value from AI
Serial.print("\t"); // print a space on serial monitor 
Serial.print("Bit value= "); // print out the lin Bit value = 
Serial.println(x); // print out the laue of x 
float IA=(5.0 - volt )/993.0; // find the current through resistor A
Serial.print("\t");
Serial.print("IA Value = ");
Serial.print(IA);
float RB= (volt/IA);// Find the resistor value of RB
Serial.print("\t\t");
Serial.print("RB Value=");
Serial.print(RB);
lcd.setCursor(0,0); // set position for the ohms symbol in colunm 0 row 0 on lcd
lcd.print(" volt = ");
lcd.println(volt);
lcd.setCursor (0,1); // set position for the ohms symbol in colunm 0 row 1 on lcd 
lcd.print (" RB = ");
lcd.println(RB);
}