char sinal;
int velocidade=151;

void Parar(){
  analogWrite(5, 0);
  analogWrite(6, 0);

  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(10);
}

void AndarPraFrente(){

  analogWrite(5, velocidade);
  analogWrite(6, 0);

  analogWrite(10, velocidade);
  analogWrite(11, 0);

  delay(10);
}

void AndarPraTras(){

  analogWrite(5, 0);
  analogWrite(6, velocidade);

  analogWrite(10, 0);
  analogWrite(11, velocidade);

  delay(10);
}

void GirarParaDireita(){
  
  analogWrite(5, velocidade);
  analogWrite(6, 0);

  analogWrite(10, 0);
  analogWrite(11, velocidade);
  delay(10);
}

void GirarParaEsquerda(){
  
  analogWrite(5, 0);
  analogWrite(6, 150);

  analogWrite(10, velocidade);
  analogWrite(11, 0);
  delay(10);
}

void setup()   
{  
  pinMode(13, OUTPUT);
  //Inicia a serial  
  Serial.begin(9600);  
  
  pinMode(5, OUTPUT); // Roda Esquerda, 
  pinMode(6, OUTPUT); // Roda Esquerda, 

  pinMode(10, OUTPUT); // Roda Direita, 
  pinMode(11, OUTPUT); // Roda Direita, 
  
}  
   
void loop()  
{  
  sinal = Serial.read();
  
  if(sinal=='F'){
    AndarPraFrente();
    }

    if(sinal=='B'){
    AndarPraTras();
    }


    if(sinal=='L'){
    GirarParaEsquerda();
    }

    
    if(sinal=='R'){
    GirarParaDireita();
    }

    Parar();
}
