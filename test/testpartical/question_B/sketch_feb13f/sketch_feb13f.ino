int enableA = 8;
int Pin1 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(enableA, OUTPUT);
  pinMode(Pin1, OUTPUT);  
}

void loop(){
  

  analogWrite(enableA, 150);
  digitalWrite(Pin1, HIGH);
}
                      
