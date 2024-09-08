/* Program Auto Lights (LDR) with Arduino Uno */

byte pinLDR = A1;
byte pinLampu = 12;
int lampuON = HIGH;
int lampuOFF = LOW;
int nilai;

void setup() {
    Serial.begin(9600);
    pinMode(pinLampu, OUTPUT);
    digitalWrite(pinLampu, lampuOFF);
}

void loop() {
    nilai = analogRead(pinLDR);
    Serial.println(nilai);
    
    if (nilai < 180) {
        digitalWrite(pinLampu, lampuON);
    }
    else {
        digitalWrite(pinLampu, lampuOFF);
    }
    delay(500);
}
