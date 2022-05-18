int led_red = 5;
int led_green = 10;

void setup() {
  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
}

void loop() {
  for (int i = 0; i < 255; i = i + 5) {
    analogWrite(led_red, i);
    analogWrite(led_green, i);
    delay(10);
  }
  for (int i = 255; i > 0; i = i - 5) {
    analogWrite(led_red, i);
    analogWrite(led_green, i);
    delay(10);
  }
  delay(1000);
}
