// C++ code
//
int numero = 0;

void setup()
{ Serial.begin(9600);
}

void loop()
{
    Serial.println("Digite um numero");
    while (!Serial.available());
    numero = Serial.parseFloat();
  
  if ( numero % 2==0){
    Serial.println("o numero e par");
    Serial.println();
  }
    else {
   Serial.println("o numero e impar");
      Serial.println();
    }
  
  
 
  delay(1000);}