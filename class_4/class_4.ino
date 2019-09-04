int number = 0;

void setup() {

  Serial.begin(9600);
  
}

void loop() {

 Serial.println(number);
 Serial.println("sec");
 delay(1000);
 number++;
 
}
