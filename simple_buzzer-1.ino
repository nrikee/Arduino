/** Más información en: http://nrikee.com/wordpress/hardware/arduino/buzzer-de-3-patas */

const int buzzerPin =  3;	// Número del pin donde está el buzzer 		
long tono1 = 150; 		    // Tono 1
long tono2 = 250; 		    // Tono 2
long b = 0;

// Se ejecuta al principio, prepara el programa
void setup() {
  pinMode(buzzerPin, OUTPUT);      // Marca el buzzerPin como pin de salida.
}

// Este método se ejecuta en bucle
void loop()
{
  if (b){
    tone( buzzerPin, tono1, 250 );	// enmite el tono 1 durante 0.25 segundos
    b = 0;
  } 
  else {
    tone( buzzerPin, tono2, 250 );	// enmite el tono 2 durante 0.25 segundos
    b = 1;
  }
  delay(100); // Para el programa 0.1 segundos
}
