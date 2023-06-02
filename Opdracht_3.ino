// C++ code
//

bool pressed = false;

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
}

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