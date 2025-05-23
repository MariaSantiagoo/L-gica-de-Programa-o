// C++ code
//

int ledverde = 13;
int ledamarelo = 12;
int ledvermelho = 11;

void setup()
{
  pinMode(ledverde, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
}

void loop()
{
  digitalWrite(ledverde, HIGH);
   digitalWrite(ledamarelo, HIGH);
   digitalWrite(ledvermelho, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledverde, LOW);
   digitalWrite(ledamarelo, LOW);
   digitalWrite(ledvermelho, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}