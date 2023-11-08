//intiele boolean set
bool set = false;

//Pin setup om outputs te defineren
void setup()
{

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);  
}

//loop op de lampjes 1 voor 1 aan te laten gaan 
void loop()
{
  if(set == false){
	  //ledjes van links naar rechts aan te laten gaan 1 voor 1
  	for(int i = 2; i <= 9; i++){
    	digitalWrite(i, HIGH);
    	digitalWrite(i-1, LOW);
    	delay(100);
	  }
    set = true;
  }
  
  if(set == true){
	//hetzelfde als de vorige loop maar dan van rechts naar links
    for(int i = 9; i >= 2; i--){
    digitalWrite(i, HIGH);
    digitalWrite(i+1, LOW);
    delay(100);
  }
    set = false;
  }
  
}
