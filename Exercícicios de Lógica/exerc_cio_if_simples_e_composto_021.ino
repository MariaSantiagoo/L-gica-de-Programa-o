// C++ code
//
float salario;
	void setup()
	{
	 Serial.begin(9600);
	}

	void loop()
	{
 	 Serial.println ("Digite o seu salario");
 	 while (!Serial.available());
 	 salario = Serial.parseFloat();
   
	if (salario < 500){
    salario = salario * 1.30;
    Serial.println("Salario com aumento: " + String(salario));
  	}
 	 else {
    Serial.println ("Parece que voce nao tem direiro a este aumento"); 
	}
  
  delay(1000);
	}