int AI = A1; // Intalizier AI at the output signa of the potentiometer
float volt = 0.0; // use float for volt to read decimode number
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // start serial monitor
}

void loop() {
 int Bitvalue = analogRead(AI); // To set the Bitvalue into the analog value from A1
Serial.print( "Bitvalue = "); // print out the line : Bitvalue = 
Serial.println(Bitvalue); // print the value of AI
float volt = (Bitvalue/1023.0)*5.0; // use this fomula to convert the bit value to voltage value 
Serial.print( " Volt = "); // print out the line : volt =
Serial.println(volt); // print out the voltage value
}