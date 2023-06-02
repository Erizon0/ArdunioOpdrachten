const int TEMP_PIN = A0;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
  int tempValue = analogRead(TEMP_PIN);
  
  int temp_index = map(tempValue, 20, 358, -40, 125);
  
  Serial.println(tempValue);
  Serial.println(temp_index);
  delay(100);
  
}