#include <ESP32Encoder.h>

ESP32Encoder encoder;

void setup() {
	Serial.begin(115200);
	ESP32Encoder::useInternalWeakPullResistors=UP;
	encoder.attachHalfQuad(32, 33);
	encoder.setCount(0);
}

void loop() {
  int count = encoder.getCount();
	Serial.println(String(count));
	delay(100);
}
