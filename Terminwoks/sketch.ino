#define BUZEER_PIN 3
#define LDR_PIN A0

void setup()
{
  pinMode(BUZEER_PIN, OUTPUT);
}

void loop()
{
  int val, freauency;

  val = analogRead(LDR_PIN);

  freauency = map(val, 0, 1023, 3500, 4500);

  tone(BUZEER_PIN, freauency, 20);
}