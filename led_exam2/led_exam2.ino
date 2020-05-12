int pin[2] = {A1, A2};
int led_length = sizeof(pin)/sizeof(int);

void setup() {
  Serial.begin(9600);
  for(int i=0; i<led_length; i++){
    pinMode(pin[i], OUTPUT);
  }
}

void loop() {
  if(Serial.available()>0){
    //\n의 앞 문자열만 읽기
    String data = Serial.readStringUntil('\n');
    Serial.println(data);
    if(data == "A1"){
      digitalWrite(pin[0], HIGH);
      delay(1000);
      digitalWrite(pin[0], LOW);
      delay(1000);
    }else if(data == "A2"){
      digitalWrite(pin[1], HIGH);
      delay(1000);
      digitalWrite(pin[1], LOW);
      delay(1000);
    }
  }
}
