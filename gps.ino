void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  while(!Serial.available()); // wait for input
  Serial.println("Receiving GPS data...");
}

void loop() {
  char c;
  if(Serial1.available()) {
    c = Serial1.read();
    Serial.print(c);
  }
}
