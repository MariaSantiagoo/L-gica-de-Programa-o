/*
Faça um programa para simular a organização de uma festa para o cadastro de convidados, 
registrando as seguintes informações:

  * Nome
  * Email
  * Idade

O programa deve solicitar os dados via monitor serial, 
armazená-los em vetores, e ao final do cadastro exibir uma listagem completa dos convidados. 

OBS: A festa contratada será vip para apenas 7 convidados
*/

String nomes[7];
String emails[7];
String idades[7];
  
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("******* Festa da Giu e da Mari ******");
   Serial.println();
  
   for(int n = 0; n < 7; n++) {
    Serial.println("Digite o nome do convidado " + String(n+1)+":");
    while (! Serial.available());
    nomes [n] = Serial.readString();
     
     
    Serial.println("Digite o email do convidado " + String(n+1)+":");
    while (! Serial.available());
    emails [n] = Serial.readString();
       
    Serial.println("Digite a idade do convidado " + String(n+1)+":");
    while (! Serial.available());
    idades [n] = Serial.readString();
   }
  
  Serial.println("****** Listagem de convidados ******");
    Serial.println();
    for (int n = 0; n <7; n++){
    Serial.println("Nome do convidado: " + nomes[n]);
    Serial.println("Email do convidado: " + emails[n]);
    Serial.println("Idade do convidado: " + String(idades[n]));
    Serial.println();
    delay(1000);
    }
}