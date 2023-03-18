float AI= A0;
float x; 
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  int val = analogRead(AI); 
  // put your main code here, to run repeatedly:
  Serial.println(val);
  if (val <120) { 
  analogWrite( 3,255);
  analogWrite(5, 255);
  analogWrite (6,255);}
 else if (val>120 && val <=300){
analogWrite( 3,255);
analogWrite(5, 102);
analogWrite (6,255); }
 else if (val>300 && val<=400){
analogWrite( 3,255);
analogWrite(5, 179);
analogWrite (6, 102); }
else if (val>400 && val<=500){
analogWrite( 3, 0);
analogWrite(5, 255);
analogWrite (6, 0); }
else if (val>500 && val<=600){
analogWrite( 3, 102);
analogWrite(5, 0);
analogWrite (6, 102); }
else if (val>600 && val<=700){
analogWrite(3,0) ;
analogWrite(5,0);
analogWrite(6,255);
}
else {
analogWrite( 3, 0);
analogWrite(5, 0);
analogWrite (6, 0);



}}
