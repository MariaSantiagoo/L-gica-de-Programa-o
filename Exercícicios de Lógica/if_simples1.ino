// C++ code
//Variáveis
int idade = 0;
String = nome
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println ("Digite sua idade");
  while ( !Serial.available() );
    idade = Serial.parseInt();
  
  //saida
 Serial.println("Idade: " + String(idade));
  if (idade >= 16){// losango de sim - verdadeiro
    Serial.println("voto obrigatorio");}
  else {// losango de não - falso
    Serial.println ("Sem idade para votar");}
  
  delay(1000);
}