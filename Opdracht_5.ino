//analoge input defineren
const int TEMP_PIN = A0;

//serieele poort defineren met de bandbreedte
void setup()
{
	Serial.begin(9600);
}

//loop om de tempratuur uit te lezen van de tempratuur sensor
void loop()
{
  int tempValue = analogRead(TEMP_PIN);

  //waarde van de sensor zetten op de graden celius range van de sensor
  int temp_index = map(tempValue, 20, 358, -40, 125);

  //waardes printen in de console
  Serial.println(tempValue);
  Serial.println(temp_index);
  delay(100);
  
}
