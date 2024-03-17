// Constantes
const int ledPin = 13; // Pin al que está conectado el LED

void setup()
{
  pinMode(ledPin, OUTPUT);   // Configurar el pin del LED como salida
  Serial.begin(9600);        // Iniciar la comunicación serial a 9600 baudios
  digitalWrite(ledPin, LOW); // Asegurarse de que el LED esté apagado al inicio
}

void loop()
{
  // Si hay datos disponibles en el puerto serial
  if (Serial.available() > 0)
  {
    char dato = Serial.read(); // Leer el primer byte recibido
    if (dato == 'A')
    { // Si se recibe la letra 'A'
      // Encender y apagar el LED dos veces cada medio segundo
      for (int i = 0; i < 2; i++)
      {
        digitalWrite(ledPin, HIGH); // Encender el LED
        delay(250);                 // Esperar 250 milisegundos
        digitalWrite(ledPin, LOW);  // Apagar el LED
        delay(250);                 // Esperar 250 milisegundos
      }
    }
    if (dato == 'B')
    { // Si se recibe la letra 'A'
      // Encender y apagar el LED dos veces cada medio segundo
      for (int i = 0; i < 2; i++)
      {
        digitalWrite(ledPin, HIGH); // Encender el LED
        delay(125);                 // Esperar 250 milisegundos
        digitalWrite(ledPin, LOW);  // Apagar el LED
        delay(125);
        digitalWrite(ledPin, HIGH); // Encender el LED
        delay(125);                 // Esperar 250 milisegundos
        digitalWrite(ledPin, LOW);  // Apagar el LED
        delay(125);                 // Esperar 250 milisegundos
      }
    }
    if (dato == 'C')
    { // Si se recibe la letra 'A'
      // Encender y apagar el LED dos veces cada medio segundo
      for (int i = 0; i < 1; i++)
      {
        digitalWrite(ledPin, HIGH); // Encender el LED
        delay(1000);                // Esperar 250 milisegundos
        digitalWrite(ledPin, LOW);  // Apagar el LED
        delay(1000);
      }
    }
    if (dato == 'D')
    { // Si se recibe la letra 'A'
      // Encender y apagar el LED dos veces cada medio segundo
      for (int i = 0; i < 1; i++)
      {
        digitalWrite(ledPin, HIGH); // Encender el LED
        delay(2000);                // Esperar 250 milisegundos
        digitalWrite(ledPin, LOW);  // Apagar el LED
        delay(2000);
      }
    }
  }
}