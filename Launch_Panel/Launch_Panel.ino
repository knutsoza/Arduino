
//variables
int switchstate = 0;

//pin setup
void setup() { 
  pinMode(2,INPUT);
  pinMode(3,OUTPUT),
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}//setup

//infiti loop
void loop() {
  if (switchstate == LOW){
    //the button is not pressed
    digitalWrite(3,HIGH);//red LED
    digitalWrite(4,LOW);//blue LED
    digitalWrite(5,LOW);//blue LED
  }// if switchstatea
  else {//button is pressed
    digitalWrite(3,LOW);
    
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    delay(250); //wait
    //toggle LEDs
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    
    delay(250); //wait
    
  }//else

}//loop()
