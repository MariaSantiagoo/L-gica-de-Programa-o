/*
Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
funcionário.
*/

//Declaração de variáveis
String nome = "";
String cargo = "";
float salario;
float novoSalario;
  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println ("Qual eh o seu nome?");
while ( !Serial.available());
  nome = Serial.readString();
  
  Serial.println ("Qual eh o seu cargo?");
    while ( !Serial.available());
    cargo = Serial.readString();
  
  Serial.println ("Qual eh o seu salario?");
  while ( !Serial.available());
  salario = Serial.parseFloat();                
  
  //Processamento
                  
  novoSalario = salario * 0.10 + salario;
  
  //Saída
  Serial.println();
  Serial.println("Nome: " + (nome));
  Serial.println("Cargo: " + (cargo));
  Serial.println("Seu novo salario: " + String(novoSalario));
  Serial.println();
}