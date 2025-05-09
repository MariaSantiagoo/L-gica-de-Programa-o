/*
Estruturas condicionais encadeadas (3 ou mais)
*/
//infantil - 5 até 8 anos 
//cadete - 8 até 12 anos
//juvenil - 12 até 15 anos
//junior - 15 até 18
//adulto - acima de 18 anos
//Qualquer outra idade n'o pode participar do esporte

int idade = 4;

void setup()
{
  Serial.begin(9600);
  
  Serial.println ("Academia do Davi");
  Serial.println();
  
  Serial.println ("Seu sobrinho tem " + String(idade) + " anos");// idade = 4
  if (idade >= 5 && idade < 8){//de 5 até 7
    Serial.println("Cadastrado na categoria infantil");}
  
  else if (idade >= 8 && idade < 12){//de 8 até 11
  Serial.println("Cadastrado na categoria cadete");}
  
   else if (idade >= 12 && idade < 15){//de 12 até 14
  Serial.println("Cadastrado na categoria juvenil");}
  
      else if (idade >= 15 && idade < 18){//de 15 até 17
  Serial.println("Cadastrado na categoria junior");}
  
  else if (idade >= 18){//de 18 pra cima
    Serial.println("Cadastrado na categoria adulto");}
  
  else {//idades abaixo de 5 anos, ou seja, de 4 anos para baixo
    Serial.println("Nao pode participar de esportes na Academia do Davi");}
}

void loop()
{
  
}