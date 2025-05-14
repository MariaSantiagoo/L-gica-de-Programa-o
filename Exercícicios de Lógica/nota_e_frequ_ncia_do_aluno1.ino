// C++ code
//variaveis
int nota1;
int nota2;
int media;
int frequencia;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println();
  Serial.println("Insira sua primeira nota");
  while( ! Serial.available());
  nota1 = Serial.parseInt();
  
  Serial.println("Insira sua segunda nota");
  while( ! Serial.available());
  nota2 = Serial.parseInt();
  
  Serial.println("Insira sua frequencia");
  while( ! Serial.available());
  frequencia = Serial.parseInt();
  
  media = (nota1+nota2)/2;
    Serial.println("Sua media eh: " + String(media));
  
  
  if ( media >= 10 && frequencia >= 100) {
    Serial.println("Parabens! Voce foi aprovado com nota maxima!");}
  
  else if ( media <= 6 && frequencia < 75) {//relembrei a estrutura do else if
        Serial.println ("Reprovado por frequencia!");}
  
  else if ( media >=6 && frequencia >= 75) {
    Serial.println ("Aprovado!"); }
  
  else if ( media <=5 && frequencia >= 75 ) {
    Serial.println ("Reprovado por nota!");}
  
  else if ( media <=5 && frequencia <=74) {
    Serial.println ("Reprovado por frequencia e nota!");}
  
  else {
    Serial.println("Nota invalida, verifique os dados");}
  
        
      
  
  
}