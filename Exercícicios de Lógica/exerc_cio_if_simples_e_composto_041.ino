// C++ code
//
int numero = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.println("Digite um numero inteiro");
    while (!Serial.available());
    numero = Serial.parseFloat();
  
  if ( numero < 0){
    Serial.println("o numero e negativo");
    Serial.println();
  }
    else {
   Serial.println("o numero e positivo");
   Serial.println();
    }
  
  
  
  
  
  
  
  delay(1000);
}