
const int PRIMOLED = 2;
const int ULTIMOLED = 6;
int timer = 50;           // The higher the number, the slower the timing.
const int analogPin = A0;
int p; 

void setup() {

  
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
 
  for (int thisPin = PRIMOLED; thisPin < ULTIMOLED; thisPin++) {
    // turn the pin on:
     p = analogRead(analogPin);
    digitalWrite(thisPin, HIGH);
    delay(p);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = ULTIMOLED; thisPin >= PRIMOLED; thisPin--) {
    // turn the pin on:
     p = analogRead(analogPin);
    digitalWrite(thisPin, HIGH);
    delay(p);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
}
