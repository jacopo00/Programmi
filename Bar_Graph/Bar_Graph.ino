
const int PRIMOLED = 2;
const int ULTIMOLED = 7;
int timer = 50;           // The higher the number, the slower the timing.
const int analogPin = A0;
int p,p1; 

void setup() {

  
  // use a for loop to initialize each pin as an output:
  for (int thisPin = PRIMOLED; thisPin <ULTIMOLED; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
 
  for (int thisPin = PRIMOLED; thisPin < ULTIMOLED; thisPin++) {
    // turn the pin on:
     p = analogRead(analogPin);
     p1 = (5*p)/1023 +PRIMOLED;
     if(thisPin < p1)
        digitalWrite(thisPin, HIGH);
    else
    // turn the pin off:
        digitalWrite(thisPin, LOW);
  }

 
}
