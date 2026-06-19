int ledPin = 13;
int onTime = 500;
int offTime = 500;

void setup(){ pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Blink started");
 
  int myAge = 21;
  float myHeight = 1.75;
  String myName = "Type your name here";
  bool isStudent = true;

  Serial.print("My name is: ");
  Serial.println(myName);

  Serial.print("My age is: ");
  Serial.println(myAge);

  Serial.print("My height is: ");
  Serial.print(myHeight);
  Serial.println(" meters");

  Serial.print("Am I a student?");
  Serial.print(isStudent);
}
void loop(){
 digitalWrite(ledPin, HIGH);
  Serial.println("LED is ON");
  delay(onTime);

  digitalWrite(ledPin, LOW);
  Serial.println("LED is OFF");
  delay(offTime);
  
}
