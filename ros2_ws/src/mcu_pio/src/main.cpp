
#include "include_all.cpp"

float normalizeAngle(float angle) {
  while (angle > 180.0) angle -= 360.0;
  while (angle < -180.0) angle += 360.0;
  return angle;
}

void setup() {
  Serial.begin(115200);
  delay(10);

  // Test GPIO 28 on Raspberry Pi Pico
  pinMode(28, OUTPUT);
  digitalWrite(28, HIGH);

  Serial.println("Pico GPIO 28 is HIGH");
}

void loop() {
  std::vector<uint8_t> payload = receive_data();
  store_data(payload);

  // Calculate motor velocities from vx, vy, vw and actuate motors
  Pwm PwmVals = calculateMotorVelocities(velocity);
  setMotorSpeeds(PwmVals);

  delay(10);

  t1.spin();
}
