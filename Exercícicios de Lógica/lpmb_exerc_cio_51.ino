/*
Faça um programa que receba a medida em centímetros e exiba esse
número em polegadas. OBS: Uma polegada equivale a 2.54
centímetros.
*/

//Declaração de variáveis
float centimetros;
float polegadas;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println ("Digite os centimetros");
    while( !Serial.available() );
  centimetros = Serial.parseFloat();
  
 //Processamento
  polegadas = centimetros / 2.54;
  
 //Saída
  Serial.println();
  Serial.println("Seu numero em polegadas:" + String (polegadas));
  Serial.println();
  
}