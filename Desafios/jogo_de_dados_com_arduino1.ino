// C++ code
//
#include <Servo.h>
  
  int numerosorteado;
  int numerodeacertos;
  int palpite;


    int ledverde = 10;
	int ledvermelho = 7;
	int ledazul1 = 4;
	int ledazul2 = 3;
	int ledazul3 = 2;

  void Desenhacabecalho() 
{
  Serial.println("**A Fortaleza do Dado Sagrado**");
  Serial.println();
  delay(500);
}
void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(ledazul1, OUTPUT);
  pinMode(ledazul2, OUTPUT);
  pinMode(ledazul3, OUTPUT);
  pinMode(ledvermelho, OUTPUT);  
  pinMode(ledverde, OUTPUT);
}

void loop()
{
  Desenhacabecalho();

  Serial.println("Adivinhe corretamente o numero sagrado do dado");
  while(!Serial.available());
  int palpite = Serial.parseInt();
 
  
  int numerosorteado = random(1,7);
  Serial.print("jogando dado");
  desenhaPontinhos();

  Serial.println();
  Serial.println();
  Serial.println("Seu palpite:" + String(palpite));
  Serial.println("Numero Sorteado:" + String(numerosorteado));
    if(palpite == numerosorteado)
  {
    Serial.println("Parabens, voce acertou!!");
    digitalWrite(ledverde,HIGH);
    delay (1500);
      digitalWrite(ledverde,LOW);
    }
    else if (numerodeacertos == 1)
    {
    digitalWrite(ledazul1, HIGH); 
    }
      else if (numerodeacertos == 2)
      {
        digitalWrite(ledazul1, HIGH);
        digitalWrite (ledazul2, HIGH);
      }
      else if (numerodeacertos == 3)
      {
        digitalWrite(ledazul1, HIGH);
        digitalWrite(ledazul1, HIGH);
        digitalWrite (ledazul3, HIGH);
      }
      
   else {
    Serial.println("Que pena, tente outra vez!!");
    digitalWrite(ledvermelho, HIGH);
    delay (1500);
    digitalWrite(ledvermelho,LOW);
  }
  
}

