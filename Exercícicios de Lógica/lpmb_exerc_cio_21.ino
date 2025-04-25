/* Faça um programa que receba o ano de nascimento de uma pessoa e
o ano atual. Calcule e imprima:
a. A idade dessa pessoa
b. Essa idade convertida em semana
*/
//Declaração de variáveis
int anoDeNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemana = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
//Entrada
  Serial.println ("Digite o ano de seu nascimento");
  while( !Serial.available() );
  anoDeNascimento = Serial.parseInt();
    
  Serial.println ("Digite o ano atual");
  while( !Serial.available() );
  anoAtual = Serial.parseInt();
    
//Processamento
   
 idade = anoAtual - anoDeNascimento;
 idadeSemana = idade * 52;
    
    
//Saída
  Serial.println ();
  Serial.println ( "Idade:" + String(idade));
  Serial.println ( " Sua idade em semanas:" + String(idadeSemana));
  Serial.println ();
  
  delay(1000);
}