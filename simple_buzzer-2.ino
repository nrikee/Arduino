/** Más información en: http://nrikee.com/wordpress/hardware/arduino/buzzer-de-3-patas */

const int buzzerPin =  3;		// Número del pin donde está el buzzer 		
long tono = 250;			      // Tono 1

void setup() {
  pinMode(buzzerPin, OUTPUT);      	// Marca el buzzerPin como pin de salida.
}

void loop()
{
   tone ( 3, tono, 500 );		// emite el tono con el número "tono" durante medio segundo	
   delay ( 1000 );
   
   if ( tono > 50 )
   	tono -= 10;
   else if( tono < 230 )
   	tono +=5;
}
