#define PIN_LED 13
unsigned int toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect (only needed for native USB boards)
  }
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println("Hello World!");
  toggle = toggleState(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

int toggleState(int toggle) {
  return !toggle;
}
