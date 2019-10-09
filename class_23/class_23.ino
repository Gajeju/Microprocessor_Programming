void setup() {
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
 Serial.begin(9600);
 }

void loop() {
 digitalWrite(12,1);
 delayMicroseconds(10);
 digitalWrite(12,0);
 int dis = pulseIn(13,1)*17/1000;

 Serial.println(dis);
 delay(100);

}
