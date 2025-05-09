// C++ code
//

String appTempo = "chuva";

  
void setup()
{
Serial.begin(9600);
}

void loop()
{
  if ( appTempo == "chuva") {
    Serial.println( "Hoje vai chover, por favor");
    Serial.println ( "Pegue o guarda-chuva");}
  else {
    Serial.println("Hoje esta ensolarado, bom passeio");
}
  Serial.println("Saindo de casa");
  
  delay(30000);
}