//RGB led pin nummers defineren
const int redPin = 3;
const int bluePin = 5;
const int greenPin = 6;

//Pin setup om outputs te defineren en seriele poort
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

//loop om door alle verschillende kleuren van de RGB led te gaan
void loop(){
  for(int i = 0; i <= 254; i= i+ 10){
  	for(int j = 0; j <= 254; j= j+10){
  		for(int k = 0; k <= 254; k= k+10){
        analogWrite(redPin, i);
    	  analogWrite(greenPin, j);
    	  analogWrite(bluePin, k);
    	  Serial.println(i);
        Serial.println(j);
        Serial.println(k);
    	  delay(50);
        }
    }
  }
}
