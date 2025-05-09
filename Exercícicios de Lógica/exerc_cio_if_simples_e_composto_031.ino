// C++ code
//

float precodecompra;
float percentual;
float precodevenda;


void setup()
{
 Serial.begin(9600);
}


void loop()
{
    Serial.println("Digite o preco de compra do produto");
    while (!Serial.available());
    precodecompra = Serial.parseFloat();
  
      Serial.println("Digite o percentual de venda");
    while (!Serial.available());
    percentual = Serial.parseFloat();

     if (percentual < 50){
    Serial.println("o produto esta com uma margem muito pequena de lucro.");
      }
  
    precodevenda = precodecompra + (precodecompra * 100/percentual);
    
    Serial.println("Preco de venda: " + String(precodevenda));
      Serial.println();
    
                       
                       

  delay(1000); 
}