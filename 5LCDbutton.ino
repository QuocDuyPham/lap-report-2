l..
0
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);



int AnIN = A0;// set int as Ao port
int val = 0; // storing bit
double volt = 0.0;// storing bit of volt 
int box = 0;

void setup() {
  // set up the LCD's number of columns and rows:

  // Print a message to the LCD.

lcd.begin(16,2); // set up the available space on the LCD display. 16 colums and 2 rows. 
Serial.begin(9600);

pinMode(13, INPUT_PULLUP);


}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):

  // print the number of seconds since reset:
//  lcd.print(millis() / 1000);
box = digitalRead(13);
val = analogRead(AnIN);
double volt = (val * 5.0) / 1023.0; 
Serial.print ("val value =");
Serial.print (val );
Serial.print ( "volt value =");
Serial.println (volt);



Serial.print ("\t Button state=");
Serial.print (box);


if (box == 0){
  lcd.setCursor(0, 0); 
  lcd.print("Volt=");
  lcd.print(volt);
 // lcd.setCursor(0, 0);
  //lcd.print("          ");
}
if (box == 1) {

  lcd.setCursor(0, 0);
  lcd.print("Val=");
  lcd.print(val);
  lcd.print("                    ");
  //lcd.setCursor(0, 1); 
  //lcd.print("             ");


}


// This sets up the location of the lcd print text on the screen. 0 is all the way to the left. 1 is the row of the LCD


//0 starting all the way from the left. 0 again starting from the frist row

}

