float AI= A1; // set AI to Analog Input 1
int REDPIN = 9; // set REDPIN to the PIN 9 
int GREENPIN = 10; // set GREENPIN to PIN 10
int BLUEPIN = 11; // set BLUEPIN to Pin 11
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(AI); 
  Serial.println(val);
  if (val <120) { // the first condition if the value from the value less than 120 RGB turn white 
  analogWrite( 3,255);
  analogWrite(5, 255);
  analogWrite (6,255);}
 else if (val>120 && val <=300){ // the second condition if val bigger than 120 but less and equal to 300 RGB turn RED 
analogWrite( 3,255);
analogWrite(5, 0);
analogWrite (6,0); }
 else if (val>300 && val<=400){  // the third condition if val bigger than 300 but less and equal to 400 RGB turn  GReen
analogWrite( 3, 0);
analogWrite(5, 255);
analogWrite (6, 0); }
else if (val>400 && val<=500){ // the forth condition if val bigger than 400 but less and equal to 500 RGB turn BLUE
analogWrite( 3, 0);
analogWrite(5, 0);
analogWrite (6, 255); }
else if (val>500 && val<=600){  // the fifth condition if val bigger than 500 but less and equal to 600 RGB turn Purple
analogWrite( 3, 255);
analogWrite(5, 0);
analogWrite (6, 255); }
else if (val>600 && val<=700){ // the sixth condition if val bigger than 600 but less and equal to 700 RGB turn YELLOW
analogWrite(3, 255) ;
analogWrite(5, 255);
analogWrite(6, 0);
}
else { // the final condition if the value is more than 700 RGB turn black
analogWrite( 3, 0);
analogWrite(5, 0);
analogWrite (6, 0);
}
}
