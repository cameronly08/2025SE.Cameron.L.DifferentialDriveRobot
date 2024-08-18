const int trigPin = 7;
const int echoPin = 8; // example pins

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  UltrasonicSensor.readDistance();
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");
  
  delay(1000);
}