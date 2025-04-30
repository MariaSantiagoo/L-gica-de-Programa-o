// C++ code
// variáveis
int idade = 0;
void setup()
{
  Serial.begin (9600);
}

void loop()
{
  Serial.println ("Digite sua idade");
  while ( !Serial.available() );
    idade = Serial.parseInt();
  
  Serial.println("Idade: " + String(idade));
  if (idade >= 18){
    Serial.println("Maior de idade");}
  else {
    Serial.println ("Menor de idade");}
  Serial.println ();
}