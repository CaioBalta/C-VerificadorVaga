ATV 02

const int pinoLDR = A0; 
const int ledVermelho = 7; 
const int ledVerde = 6;    


int limiteLuz = 500;

void setup() {
 
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  
  Serial.begin(9600);
}

void loop() {
 
  int valorLDR = analogRead(pinoLDR);

 
  Serial.print("Valor do LDR: ");
  Serial.println(valorLDR);

 
  if (valorLDR < limiteLuz) {
    
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
  } else {
    
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
  }


  delay(500);
}