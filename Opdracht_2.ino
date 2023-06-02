// C++ code
// 
bool set = false;

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

void loop()
{
  if(set == false){
  	for(int i = 2; i <= 9; i++){
    	digitalWrite(i, HIGH);
    	digitalWrite(i-1, LOW);
    	delay(100);
	  }
    set = true;
  }
  
  if(set == true){
   
    for(int i = 9; i >= 2; i--){
    digitalWrite(i, HIGH);
    digitalWrite(i+1, LOW);
    delay(100);
  }
    set = false;
  }
  
}