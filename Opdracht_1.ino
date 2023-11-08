//Pin setup om outputs te defineren
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

//loop om de ledjes om en om te laten knipperen
void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
