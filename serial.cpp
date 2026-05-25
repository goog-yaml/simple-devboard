// C++ Software serial Code
//
//
// Made by Claude 
//
//
// ESP8266 Code
#include <SoftwareSerial.h>

// Hardware UART for FT230X (USB)
// Serial uses GPIO1(TX), GPIO3(RX)

// Software Serial for ESP32-S3
SoftwareSerial s3Serial(D7, D8);  // RX on D7 (GPIO13), TX on D8 (GPIO15)

void setup() {
  Serial.begin(115200);        // USB debugging (FT230X)
  s3Serial.begin(57600);       // Talk to ESP32-S3
}

void loop() {
  // Read sensor
  float temp = readSensor();
  
  // Send to S3 (via software serial)
  s3Serial.print(temp);
  s3Serial.println();
  
  // Receive response from S3
  if (s3Serial.available()) {
    String result = s3Serial.readStringUntil('\n');
    Serial.println("AI Result: " + result);  // Print to USB
  }
  
  delay(500);
}
