//Variáveis
int tabuadaescolhida;

  
void setup()
{
  Serial.begin(9600);
  
  Serial.println("Digite o numero da tabuada que voce deseja");
  while (! Serial.available());
  tabuadaescolhida = (Serial.parseInt());
  
  for (int contador = 1; contador <= 10; contador++) {
    Serial.println(String(tabuadaescolhida)+"x"+ String(contador) + "=" + String(tabuadaescolhida * contador));
   
  
    delay (1000);
  }
}

void loop()
{
  
}