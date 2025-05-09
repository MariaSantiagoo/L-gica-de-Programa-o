// C++ code
//variáveis - escopo de variáveis (global)

void setup()
{ // função que roda só na inicialização do programa
	Serial.begin(9600);//Carrega o módulo Serial para usar com o arduíno
  
  String nome = "Edu Paz";//Escopo local só vale dentro de setup
  Serial.println("Nome eh" + nome);//escreve Edu Paz na Serial
  nome = "Bia Paz";//muda o valor da variável nome para "bia paz"
  
}

void loop()
{//função que roda eternamente, até desligar o arduíno
  String nomeDele = "Paulo Vieira"; // Variável local dentro do loop
  
  if (nomeDele == "Paulo Vieira" )
  {// Estrutura condicional simples
    int idade = 16; //variável locad dentro do if
  }
  Serial.println ( "nome dele eh:" + nomeDele); //Imprime "Paulo Vieira"
  Serial.println ( "idade dele eh:" + idade); //da erro pois essa variável não existe nesse escopo
  
  delay = 10000; // aguarda 10 segundos para rodar o código
}