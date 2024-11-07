#define PIN_MODE 8
#define PIN_PHOTO_SENSOR A0

void setup() {
 Serial.begin (9600);
 pinMode (PIN_MODE, OUTPUT);

}
void loop() {
  int val = analogRead (PIN_PHOTO_SENSOR);
  Serial.println (val);
  if (val < 300) {
    digitalWrite(PIN_MODE, LOW);
  } else {
    digitalWrite (PIN_MODE, HIGH);
  }
}
