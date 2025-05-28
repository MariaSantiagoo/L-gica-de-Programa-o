/*
Criar um protótipo com 3 leds: verde, vermelho e amarelo.
Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar,
com suas devidas funcionalidades, da seguinte forma:

1) Ligar Led Verde
2) Desligar Led Verde
3) Ligar Led Amarelo
4) Desligar Led Amarelo
5) Ligar Led Vermelho
6) Desligar Led Vermelho
7) Ligar Todos os Leds
8) Desligar Todos os Leds
0) Sair

Você não pode esquecer dos resistores e de configurar cada porta de lede com a função
pinMode(pino, modo) lá dentro da função setup()

Utilizar Do While, Switch e Serial para o menu e comunicação com o usuário*/
int ledverde = 13;
int ledamarelo = 12;
int ledvermelho = 11;
int contador;
int escolhadousuario;

void setup()
{
  Serial.begin(9600);

  pinMode(ledverde, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
}

void loop()
{

  do{
    Serial.println("Bem-vindo ao sistema de led!!:P");
    Serial.println("Escolha uma das opcoes abaixo:");
    delay(500);
    Serial.println("1) Ligar Led Verde");
    delay(500);
    Serial.println("2) Desligar Led Verde");
    delay(500);
    Serial.println("3) Ligar Led Amarelo");
    delay(500);
    Serial.println("4) Desligar Led Amarelo");
    delay(500);
    Serial.println("5) Ligar Led Vermelho");
    delay(500);
    Serial.println("6) Desligar Led Vermelho");
    delay(500);
    Serial.println("7) Ligar Todos os Leds");
    delay(500);
    Serial.println("8) Desligar Todos os Leds");
    delay(500);
    while (! Serial.available());
    escolhadousuario = Serial.parseInt();
    delay(500);

    switch(escolhadousuario){
      case 1 :
      digitalWrite(ledverde, HIGH);
      Serial.println("uhuu, o led verde esta ligado!:D");
      break;
      
      case 2: 
      digitalWrite(ledverde, LOW);
      Serial.println("uhuu, o led verde esta desligado!:D");
      break;
      
      case 3: 
      digitalWrite(ledamarelo, HIGH);
      Serial.println("uhuu, o led amarelo esta ligado!:D"); 
      break;
      
      case 4:
      digitalWrite(ledamarelo, LOW);
      Serial.println("uhuu, o led amarelo esta desligado!:D");
      break;
      
      case 5:
      digitalWrite(ledvermelho, HIGH);
      Serial.println("uhuu, o led vermelho esta ligado!:D"); 
      break;
      
      case 6:
      digitalWrite(ledvermelho, LOW);
      Serial.println("uhuu, o led vermelho esta desligado!:D");
      break;
      
      case 7:
      digitalWrite(ledverde, HIGH);
      digitalWrite(ledvermelho, HIGH);
      digitalWrite(ledamarelo, HIGH);
      Serial.println("uhuu, todos os leds estao ligados!:D");
      break;
      
      case 8: 
      digitalWrite(ledverde, LOW);
      digitalWrite(ledvermelho, LOW);
      digitalWrite(ledamarelo, LOW);
      Serial.println("uhuu, todos os leds estao desligados!:D");
      break;
      
      case 0:
      Serial.println("Tchau!:D");
      digitalWrite(ledverde, LOW);
      digitalWrite(ledvermelho, LOW);
      digitalWrite(ledamarelo, LOW);

      break;
      
      default:
      Serial.println("Ops, parece que essa opcao eh invalida.:(");
      Serial.println("Tente novamente com um número de 1 a 8!:p");
    }
    
    Serial.println("Voce deseja sair do programa?? Digite sim ou nao :) (em minusculo, por favor)");
    while (! Serial.available()){}

    if(Serial.readString() == "sim"){
      contador = 1;

    }
    else{
      contador = 0;

      Serial.println("Ate logo!:)"); 
    }

  }
  while(contador != 0);
  
  while(true);
}

