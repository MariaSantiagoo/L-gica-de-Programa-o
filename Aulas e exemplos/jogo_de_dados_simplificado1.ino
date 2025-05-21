// C++ code
//
int palpite;
void setup()
{
 Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
  Serial.println("");//pula linha
  Serial.println("");
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println("");
  Serial.println("");
  
  //pedir palpite ao usuário
  Serial.println("Digite um palpite de 1 a 6");
  while (! Serial.available());
  int palpite = Serial.parseInt();
  
  
  //sortear dado
  int numeroSorteado = random(1, 7);//gera um numero aleatorio entre 1 e 6
  
  
  //mostrar resultado
  
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero do dado: " + String(numeroSorteado));
  
  //se acertou dar parabens, senao que pena
  
  if (palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!!");
  }
  else
  {
    Serial.println("Que pena, tente outra vez!!");
  }
}