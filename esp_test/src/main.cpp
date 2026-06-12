#include <Arduino.h>

void setup() {
    Serial.begin(115200);

    Serial.println("ESP32 is alive!");
}

void loop() {
    Serial.println("Hello from PlatformIO!");
    delay(1000);
}