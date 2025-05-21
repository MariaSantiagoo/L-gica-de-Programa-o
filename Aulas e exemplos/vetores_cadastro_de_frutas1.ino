// C++ code
//Variaveis globais
String frutas[5];//vetor vazio 0-4
float precofrutas[5];
int quantidade[5];
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  
  //imprime um cabeçalho
  Serial.println("******* Programa cadastro de frutas ******");
   Serial.println();
  //pedir as frutas para o usuario
  //guardar as frutas no compartimento correto

  for(int f = 0; f < 5; f++) {
    Serial.println("Digite uma fruta");
    while (! Serial.available());
    frutas [f] = Serial.readString();
    
    Serial.println("Quantidade da fruta em estoque");
    while (! Serial.available());
    precofrutas [f] = Serial.parseFloat();
    
    Serial.println("Digite preco da fruta " + frutas[f]);
    while (! Serial.available());
    precofrutas [f] = Serial.parseFloat();
  }

    Serial.println("****** Listagem de frutas ******");
    Serial.println();
    for (int f = 0; f <5; f++){
    Serial.println("Fruta: " + frutas[f]);
    Serial.println("Quantidade da fruta: " + String(quantidade[f]));
    Serial.println("Preco: R$" + String(precofrutas[f]));
    Serial.println();
    delay(1000);
 }
  //
  
  
  //usar o for para exibir as frutas cadastradas
  
}