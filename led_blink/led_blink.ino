// LED を点滅させるサンプル
// 
// ArduinoIDE 付属サンプル、『Aruduino をはじめよう』から
// 
// LED の短い足（K: カソード）をマイナス側（GND）
// LED の長い足（A: アノード）をプラス側（13番）に繋ぐ
// ※長時間点灯させる場合は抵抗器を使う

// LED を繋いだピン
const int LED_PIN = 13;

// LED を点灯・消灯している時間（ms）
// 長さをいろいろ変えてみる。
const int LED_ON_TIME_MS = 1000;
const int LED_OFF_TIME_MS = 100;

// 起動時、最初に1回だけ実行される関数
void setup() {
  pinMode(LED_PIN, OUTPUT);
}

// setup の後はこの関数が繰り返し実行される。
void loop() {
  // LED 付ける
  digitalWrite(LED_PIN, HIGH);

  // 点灯 → 消灯の間隔
  delay(LED_ON_TIME_MS);

  // LED 消す
  digitalWrite(LED_PIN, LOW);

  // 消灯 → 点灯の間隔
  delay(LED_OFF_TIME_MS);
}
