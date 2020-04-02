/*
  1. for first time circuit PIR needed a lil bit seconds to minutes for warming up
  placing sensor to blank space and no movement object
  2. after detecting movement give delay (mine 5 secs) for next reading sensor 
*/

int led = 13;        
int sensor = 2;
void setup() {
  pinMode(led, OUTPUT);      
  pinMode(sensor, INPUT);    
  Serial.begin(9600);        
  delay(10000);              // warmingup PIR sensor
}

void loop(){
  val = digitalRead(sensor);   
  if (val == HIGH) {           
    digitalWrite(led, HIGH);   
    Serial.println("Motion detected!"); 
    delay(5000);             //resting for next sensor reading
    digitalWrite(led, LOW);
    Serial.println("Motion ended!"); 
  }
}
