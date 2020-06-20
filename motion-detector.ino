
// Motion Detecting Lamp
// Used in 3d printer enclosure to automatically activate lights.
// ----------
// NOTE: If unable to flash to Arduino Nano, select
// ATMega 328p (Old Bootloader) from Tools > Processor menu.
// ----------
const int SENSOR_PIN = 7;       // D7 to (middle) wire of sensor.
const int RELAY_PIN = 6;        // D6 to control relay.
const int DELAY_MINS = 2;       // Check sensor every X minutes.

void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  int motion = digitalRead(SENSOR_PIN);
 
  if (motion) {
    digitalWrite(RELAY_PIN, HIGH);  // Relay ON
  } else {
    digitalWrite(RELAY_PIN,LOW);    // Relay OFF
  }
  
  delay(1000 * (60 * DELAY_MINS));
}
