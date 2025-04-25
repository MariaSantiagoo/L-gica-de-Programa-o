// Faça um programa que receba um número e exiba o seu dobro.
 
//Declaração de variáveis
int numero;
int dobroNumero;
  
void setup()
{
   Serial.begin(9600);
}

void loop()
{
 //Entrada
   Serial.println ("Digite um numero inteiro");
  while( !Serial.available() );
  numero = Serial.parseInt();
  //Processamento
  dobroNumero = numero * 2;
    
  //Saída
  Serial.println();
  Serial.println( "o dobro do seu numero:" + String (dobroNumero));
  Serial.println();
  
}