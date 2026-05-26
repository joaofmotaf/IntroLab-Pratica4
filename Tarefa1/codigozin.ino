void setup() {
  Serial.begin(115200);
}

void loop() {
  double a = 5.0 * analogRead(A0) / 1023;

  double x = (5-a)/5;
  double R = (x * 1e4)/(1-x);
 
  Serial.println(R);
  Serial.println();
  delay(1000);
}