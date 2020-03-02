const int pinButton = 8;
const int BUZZ = 9;
void setup() {
  pinMode(pinButton, INPUT);
  pinMode(BUZZ, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int stateButton = digitalRead(pinButton);
  Serial.println(stateButton);
  delay(20);
  if (!stateButton) {
        noTone(BUZZ);
        Serial.println("ALARM DEACTIVATED");

  }
  else {


    tone(BUZZ, 100);
    delay(100);

    noTone(BUZZ);
    delay(100);

    Serial.println("----------- ALARM ACTIVATED -----------");
  }
}
