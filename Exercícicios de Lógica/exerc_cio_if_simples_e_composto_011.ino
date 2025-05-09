// C++ code
//Variaveis
String nome, cargo;
float salario;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println ("Digite seu nome");
  while (!Serial.available());
  nome = Serial.readString();
  
  Serial.println ("Digite seu seu cargo");
  while (!Serial.available());
  cargo = Serial.readString();
  
  Serial.println ("Digite seu salario");
  while (!Serial.available());
  salario = Serial.parseFloat();
   
  //Processamento
  
  if ( salario < 1000){
    salario = salario * 1.10;
  }  
  //saida
       Serial.println();
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Salario: " + String(salario));
  Serial.println();
  }
 
 