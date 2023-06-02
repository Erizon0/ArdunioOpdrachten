const int LED_COUNT = 7; // number of LEDs in the array
const int LED_PINS[LED_COUNT] = {3,4,5,6,7,8,9}; // array of LED pins
const int POT_PIN = A0; // potentiometer input pin
int ledOn = -1; // index of the LED that is currently on (-1 indicates no LED is on)

void setup() {
  // set all LED pins to output mode
  for (int i = 0; i < LED_COUNT; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  // read the value of the potentiometer
  int potValue = analogRead(POT_PIN);
  
  // map the potentiometer value to a LED index between 0 and 6
  int ledIndex = map(potValue, 0, 1023, 0, LED_COUNT - 1);
  
  // turn on the selected LED and turn off all others
  if (ledIndex != ledOn) {
    // turn off all LEDs
    for (int i = 0; i < LED_COUNT; i++) {
      digitalWrite(LED_PINS[i], LOW);
    }
    // turn on the selected LED
    digitalWrite(LED_PINS[ledIndex], HIGH);
    // turn on all LEDs below the selected LED
    for (int i = ledIndex + 1; i < LED_COUNT; i++) {
      digitalWrite(LED_PINS[i], HIGH);
    }
    // update ledOn variable
    ledOn = ledIndex;
  }
}
