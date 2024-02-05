int motionSensorPin = 2;
int bulbControlPin = 3;

int bulbOnTime = 30000;  // 30 seconds

void setup() {
  pinMode(motionSensorPin, INPUT);
  pinMode(bulbControlPin, OUTPUT);
}

void loop() {
  // Read motion sensor
  int motionDetected = digitalRead(motionSensorPin);

  if (motionDetected == HIGH) {
    // Motion detected, turn on the bulb
    digitalWrite(bulbControlPin, HIGH);
    delay(bulbOnTime);
  } else {
    // No motion, turn off the bulb
    digitalWrite(bulbControlPin, LOW);
  }
}