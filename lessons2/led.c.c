void setup()
{
  pinMode(12, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(500); 
  digitalWrite(12, LOW);
  digitalWrite(1, HIGH);
  delay(500); 
  digitalWrite(1, LOW);
}
