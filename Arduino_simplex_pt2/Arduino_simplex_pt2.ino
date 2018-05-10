//Agostinelli Biagioli Arduino simplex pt2
int myID;   //variabile contenente il propio ID
int statoLed; //variabile che contiene lo stato led 0 o 1 
String s; //variabile che contine la stringa da stampare a video
int i=0;
void setup() {
    // initialize serial:
  Serial.begin(9600);   //attiva comunicazione tramite porta seriale USB
  int pin;              //variabile che serve per contenere i pin da settare
  int b0, b1, b2, b3;
  for (int pin = 8; pin <= 11; pin++){ //setta i pin 8,9,10,11 in Output
    pinMode(pin, OUTPUT);
  }
  b0 = digitalRead(2);
  b1 = digitalRead(3);
  b2 = digitalRead(4);
  b3 = digitalRead(5);
  myID = b0 + 2*b1 + 4*b2 + 8*b3; //calcola il my ID con conversione binaria-decimale

}

void loop() {
    if (Serial.available() > 0){      //fa questo se la lettura è avvenuta
    int destinatario = Serial.parseInt();      
    int tipo = Serial.parseInt();    //traduce i codici ASCII di caratteri numerici in valore intero    
       if(destinatario == myID){   //se il destinatario è uguale all'ID  
          switch (tipo)           //si passa al campo tipo
            {
              int statoLed =  Serial.parseInt();
              int dati = Serial.parseInt(); 
              case 1:              //se il campo tipo è 1 si controllano i led
                int numeroLed;
                if(dati == 9)      //se il campo dati è = a 9 si devono accendere tutti i led
                  {
                    
                    digitalWrite(8,statoLed); 
                    digitalWrite(9,statoLed);
                    digitalWrite(10,statoLed);
                    digitalWrite(11,statoLed);
                  }
                else
                    digitalWrite(dati+7, statoLed); 
                break;

                case 2:                         //se il campo tipo è 2 scrive sul monitor seriale la stringa 
                   int dati = Serial.parseInt(); 
                     s = Serial.readString();   //nella stringa inserisce la stringa passata come 3 campo 
                     Serial.println("");         //stampa a video la stringa s
                 break;

                case 3:                     //se al campo tipo si passa il numero 3 il led 8 lampeggia 
                    if(dati == 100)         
                      {
                        i=0;
                        do{
                        digitalWrite(8,HIGH);
                        delay(dati);
                        digitalWrite(8,LOW);
                        delay(dati);
                        i++;
                        }while(i!=5);     //il led 8 lampeggia con un'intervallo di 100 per 5 volte
                      }
                    else
                      {
                        if(dati == 700)
                          {
                            i=0;
                            do{
                            digitalWrite(8,HIGH);
                            delay(dati);
                            digitalWrite(8,LOW);
                            delay(dati);
                            i++;
                            }while(i!=5);    //il led 8 lampeggia con un'intervallo di 100 per 5 volte
                          }
                   break;
                          
                      }
        
            }
       }

       else
          String msg = String(destinatario)+","+String(tipo)+","+String(dati);

}
}
