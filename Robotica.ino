char sinal;
int velocidade = 150;
int virar = 100;
int tempo;

void Parar(){
  analogWrite(5, 0);
  analogWrite(6, 0);

  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(tempo);
}

void AndarPraFrente(){

  analogWrite(5, velocidade);
  analogWrite(6, 0);

  analogWrite(10, velocidade);
  analogWrite(11, 0);

  delay(tempo);
}
void DiagonalDireita(){

  analogWrite(5, velocidade/2);
  analogWrite(6, 0);

  analogWrite(10, velocidade);
  analogWrite(11, 0);

  delay(tempo);
}

void DiagonalEsquerda(){

  analogWrite(5, velocidade);
  analogWrite(6, 0);

  analogWrite(10, velocidade/2);
  analogWrite(11, 0);

  delay(tempo);
}
void AndarPraTras(){

  analogWrite(5, 0);
  analogWrite(6, velocidade);

  analogWrite(10, 0);
  analogWrite(11, velocidade);

  delay(tempo);
}

void ReEsquerda(){

  analogWrite(5, 0);
  analogWrite(6, velocidade/2);

  analogWrite(10, 0);
  analogWrite(11, velocidade);

  delay(tempo);
}

void ReDireita(){

  analogWrite(5, 0);
  analogWrite(6, velocidade);

  analogWrite(10, 0);
  analogWrite(11, velocidade/2);

  delay(tempo);
}

void GirarParaDireita(){
  
  analogWrite(5, 0);
  analogWrite(6, virar);

  analogWrite(10, virar);
  analogWrite(11, 0);
  delay(tempo);
}

void GirarParaEsquerda(){
  
  analogWrite(5, virar);
  analogWrite(6, 0);

  analogWrite(10, 0);
  analogWrite(11, virar);
  delay(tempo);
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
    
    if(sinal=='S'){
    Parar();
    }
    
     if(sinal=='G'){
    DiagonalEsquerda();
    }
    
     if(sinal=='I'){
    DiagonalDireita();
    }

         if(sinal=='H'){
    ReEsquerda();
    }

         if(sinal=='J'){
    ReDireita();
    }
}
