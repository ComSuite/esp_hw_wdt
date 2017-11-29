#include "esp_hw_wdt.h"

void setup() {
  Serial.begin(115200);
  Serial.setDebugOutput(true);

  wdt_disable(); //disable sowtwarte wdt
  esp_hw_wdt_disable(); //disable hardware wdt

  for (uint64_t i = 0; i < 100000; i++){
      Serial.println("wait");
  }

  esp_hw_wdt_enable(); //enable hardware wdt
  wdt_enable(1000); //enablw software wdt
}

void loop() {
  Serial.println("loop");
  // put your main code here, to run repeatedly:
  delay(100);
}
