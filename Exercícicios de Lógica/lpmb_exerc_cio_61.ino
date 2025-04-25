/* 
Faça um programa que receba a medida em polegadas e exiba esse número em
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
  Serial.println ("Digite as polegadas");
    while( !Serial.available() );
  polegadas = Serial.parseFloat();
  
 //Processamento
  centimetros = polegadas * 2.54;
  
 //Saída
  Serial.println();
  Serial.println("Seu numero em centimetros:" + String (centimetros));
  Serial.println();
  
}