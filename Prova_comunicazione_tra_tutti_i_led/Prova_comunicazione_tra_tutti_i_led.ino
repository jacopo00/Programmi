int myId;//variabile globale che rappresenta l'indirizzo
void setup() {
  // initialize serial:
  Serial.begin(9600);   //attiva comunicazione tramite porta seriale USB
  int pin;
  int b0, b1, b2, b3;
  for (int pin = 8; pin <= 11; pin++){
    pinMode(pin, OUTPUT);
  }
  //lettura ID
  b0 = digitalRead(2);
  b1 = digitalRead(3);
  b2 = digitalRead(4);
  b3 = digitalRead(5);
  myId = b0 + 2*b1 + 4*b2 + 8*b3;//calcola il myID con conversione binario-decimale
}

void loop() {
  if (Serial.available() > 0){//fa questo se la lettura del monitor seriale è avvenuta 
    int destinatario = Serial.parseInt();  //assegnazione alla variabile     
    int numeroLed = Serial.parseInt();    //traduce i codici ASCII di caratteri numerici in valore intero
    int statoLed = Serial.parseInt();
    if(destinatario == myId)//se il destinatario corrisponde al myID
    {
      if(numeroLed == 9)//se il numero led è 9 controlla tutti i led
      {
        digitalWrite(8,statoLed); 
        digitalWrite(9,statoLed);
        digitalWrite(10,statoLed);
        digitalWrite(11,statoLed);
      }
      else//numero led da 1 a 4 
        digitalWrite(numeroLed+7, statoLed);//controllo singolo led 
    }
    else//se ID è un altro
    {
      String msg = String(destinatario)+"," + String(numeroLed)+"," + String (statoLed); 
      Serial.println(msg);//invia i dati del monitor seriale alla scheda successiva
    }
  }
}



