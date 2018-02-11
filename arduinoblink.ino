// Arduino blink - Ecender y apagar un led. 

void setup(){
	pinMode(13, OUTPUT);  // Configuramos el pin 13 como salida
}

void loop (){
	digitalWrite(13, HIGH); // Colocamos el pin 13 en estado Alto
	delay(500);				// Pausa de 500ms
	digitalWrite(13, LOW);	// Colocamos el pin 13 en estado Bajo
	delay(500);				// Pausa de 500ms
}