const int LED_COUNT = 7; // hoeveelheid aan leds totaal
const int LED_PINS[LED_COUNT] = {3,4,5,6,7,8,9}; // lijst met de aansluitingen voor de ledjes
const int POT_PIN = A0; // potmeter input pin
int ledOn = -1; // index om aan te geven welke led op dit moment aan staat (-1 betekend dat geen led aanstaat)

//Pin setup om outputs te defineren
void setup() {
  // set all LED pins to output mode
  for (int i = 0; i < LED_COUNT; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  // potmeter uitlezen
  int potValue = analogRead(POT_PIN);
  
  // de waarde van de potmeter zetten op de hoeveelheid leds
  int ledIndex = map(potValue, 0, 1023, 0, LED_COUNT - 1);
  
  // het geselecteerde ledje aanzetten en de rest uit op basis van de waarde
  if (ledIndex != ledOn) {
    // alle leds uitezetten
    for (int i = 0; i < LED_COUNT; i++) {
      digitalWrite(LED_PINS[i], LOW);
    }
    // geselecteerde led aanzetten
    digitalWrite(LED_PINS[ledIndex], HIGH);
    // alle leds onder de geselecteerde led aanzetten
    for (int i = ledIndex + 1; i < LED_COUNT; i++) {
      digitalWrite(LED_PINS[i], HIGH);
    }
    // de ledOn updaten naar de huidige led die aanstaat
    ledOn = ledIndex;
  }
}
