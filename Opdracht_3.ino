//initiele waarde voor variable
bool pressed = false;

//Pin setup om in en outputs te defineren
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
}

//loop om te kijken of de knop is ingedrukt en een ledje te aan of uit te zetten op een druk
void loop()
{
  if((digitalRead(10) == true) && (pressed == false)){
    digitalWrite(11, HIGH);
    delay(150);
    pressed = true;
  }
  
  if((digitalRead(10) == true) && (pressed == true)){
    digitalWrite(11, LOW);
    delay(150);
    pressed = false;
  }
  
}
