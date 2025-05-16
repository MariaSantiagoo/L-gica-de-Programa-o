//Váriaveis
int escolhadaoperacao;
float resultado;

//ESTRUTURA: tipoderetono nomedafunção parametros corpo
float adicao(float numero1param, float numero2param = 0){
  	resultado = numero1param + numero2param; // ; indica que é o final da instrução
  	return resultado;
  	//Serial.println ("uhuu!! O resultado da sua soma foi: " + String(resultado));//concatenar
}

float subtracao(float numero1param, float numero2param = 0){
  	resultado = numero1param - numero2param;
  	/*Serial.println ("uhuu!! O resultado da sua subtracao foi: " + String(resultado));//concatenar*/
  	return resultado;
}

float divisao(float numero1param, float numero2param = 0) {
 	resultado = numero1param / numero2param;
  	Serial.println ("uhuu!! O resultado da sua divisao foi: " + String(resultado));//concatenar
}

float multiplicacao (float numero1param, float numero2param = 0) {
  	resultado = numero1param * numero2param;
  	Serial.println ("uhuu!! O resultado da sua divisao foi: " + String(resultado));//concatenar
}
  


void setup()
{
  	Serial.begin(9600);

  int contador = 0;//variavel inicializadora
  float numero1;
  float numero2;
  

  
  do{
    Serial.println("Bem-vindo a calculadora inteligente! :p \n");
    Serial.println("Escolha uma das operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Dividir");
    Serial.println("4 - Multiplicar");
    while (! Serial.available()){}
    escolhadaoperacao = Serial.parseInt();


    Serial.println("Para realizarmos a operacao, digite 2 numeros");
    Serial.println("Digite o 1o numero");
     while (! Serial.available()){}
    numero1 = Serial.parseFloat();
    
    
    Serial.println("Agora, digite o 2o numero");
     while (! Serial.available()){}
    numero2 = Serial.parseFloat();
    
    switch(escolhadaoperacao){
      	case 1: //SOMAR
      		//adicao (numero1, numero2);
     		//adicao (numero1);
      		float retornofuncaosomar;
      		retornofuncaosomar = adicao (numero1, numero2);
      		Serial.println("uhuu!! O resultado da sua soma foi: " + String(retornofuncaosomar));
      	
      break;
      	case 2: //subtracao
      		//subtracao (numero1, numero2);
      		float retornofuncaosubtracao; // adicionar uma variavel para o retorno do resultado da subtracao
    		retornofuncaosubtracao = subtracao (numero1, numero2);//chamar o retorno da subtracao com o resultado
      		Serial.println("uhuu!! O resultado da sua subtracao foi: " + String(retornofuncaosubtracao));// exibir o resultado para o usuario
      
      break;
      	case 3:
      		divisao (numero1,numero2);
      
      break;
        case 4:
      		multiplicacao (numero1, numero2);
      
      break;
      
      default:
      		Serial.println("Opcao invalida! Tente novamente com uma opcao do 1 ao 4. :D");
    }


    Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo)");
    while (! Serial.available()){}
	
    
    
    if(Serial.readString() == "sim"){
    	contador = 1;
      
    }
    else{
      contador = 0;

      Serial.println("Ate logo!");
      Serial.println("Caso deseje voltar ao menu, reinicie o programa! ;)");
    }
    

    
  }//executa a condição uma vez assim que inicializa o programa, se a condição for falsa, ele nao continua
 	 while(contador != 0);
}

void loop()
{
  //sem instruções
}