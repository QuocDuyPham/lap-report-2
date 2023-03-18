int AI = A1; // Intalizier AI at the output signa of the potentiometer
float volt = 0.0; // use float for volt to read decimode number
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // start serial monitor
}

void loop() {
 int Bitvalue = analogRead(AI);
Serial.print( "Bitvalue = "); 
Serial.println(Bitvalue);
float volt = (Bitvalue/1023.0)*5.0; // use this fomula to convert the bit value to voltage value 
Serial.print( " Volt = ");
Serial.println(volt);
}
