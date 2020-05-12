int pin[2] = {A1, A2};
int led_length = sizeof(pin)/sizeof(int);

void setup() {
  for(int i=0; i<led_length; i++){
    pinMode(pin[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<led_length; i++){
    digitalWrite(pin[i], HIGH);
    delay(1000);
    digitalWrite(pin[i], LOW);
    delay(1000);
  }
}
