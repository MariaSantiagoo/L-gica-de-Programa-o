/*
While - É uma estrutura de repetição que só executa a repetição quando a condição for verdadeira.

*/

//A função SETUP() tem como objetivo inicializar o sistema ou programa. Podemos chamar de configuração.
void setup()
{
  Serial.begin(9600);
  

  /*Tipos de Dados( Principais )
  - INT ( Números inteiros)
  - LONG ( números inteiros - é um int com maior capacidade de armazenamento)
  - STRING ( caracteres: alfanúmericos e especiais)
  - FLOAT ( são números com casas deciamais)
  - BOOL (true e false)
  */
  
    //Variável inicializadora
  
    //1a- contadorWhile++;
    //2a- contadorWhile = contadorWhile + 1;
    //3a - contadorWhile += 2; ( somar um valor diferente de 1)
  
  /* operadores 
  Aritméticos: = , - , * , / , %
  Lógicos: 
  - || (PIPI - OU)
  - && ( E COMERCIAL - E)
  - ! (PONTO DE EXCLAMAÇÃO - NEGAÇÃO/INVERTE)
  
  Relacional:
  - == (COMPARAÇÃO)
  - >= (MAIOR QUE E IGUAL)
  - > (MAIOR QUE)
  - <= (MENOR QUE E IGUAL
  - != (DIFERENTE DE)
  - < (MENOR QUE)
  
  */
  
	for (int contador = 1; contador <= 100; contador++){
 		Serial.println(contador);
  
}

}
  
//for(int contador = 1; contador <= 100; contador++ ){
  //Serial.println(contador);
  
//}

//A função LOOP() tem como objetivo de repetir várias vezes o programa.
void loop()
{
}
  //Sem instruções
