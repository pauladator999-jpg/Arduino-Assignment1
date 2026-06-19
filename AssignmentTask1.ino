int startValue = 5;
int ledPin = 13;

void flashLED(int times){
  int count = 0;
  while (count < times){
  digitalWrite(ledPin, HIGH); delay(200); 
  digitalWrite(ledPin, LOW); delay(200);
  count ++;}
}

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== SMART COUNTDOWN STARTING ===");
  
  int count = startValue;   //start the counter at 5
  
  while(count > 0) {
    Serial.print("Count: ");
    Serial.println(count);
    
    flashLED(count);

  delay(1000);
    count = count - 1;
    }  
  
  Serial.println("===COUNTDOWN COMPLETE===");
  
  }
void loop(){
  //Empty - countdown only runs once in setup()
  }
