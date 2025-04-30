// C++

String cor = "";
  
void setup()
{
  Serial.begin (9600);
}

void loop()
{
Serial.println ("Digite uma cor do semaforo");
  while ( !Serial.available ());
 cor = Serial.readString();
  
  
  if ( cor == "Vermelho" ){
    Serial.println("Pare");}
  
  
  if (cor == "Verde") {
    Serial.println ("Siga");}
  
  Serial.println ();
  
  delay(1000);
}