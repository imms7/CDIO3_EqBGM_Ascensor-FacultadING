#include <Servo.h>

// Definición de pines
const int pinBoton = 2;   // Pin donde conectamos el botón
const int pinServo = 9;   // Pin de señal del servo

// Variables de estado
Servo miServo;
int estadoPiso = 0;       // 0 = Planta Baja, 1 = Piso 1
bool botonPresionado = false;

void setup() {
  // Configuración del botón con resistencia pull-up interna
  // Esto significa que el pin leerá HIGH por defecto y LOW al presionar
  pinMode(pinBoton, INPUT_PULLUP);
  
  // Inicialización del servo
  miServo.attach(pinServo);
  miServo.write(0); // Empezamos en la Planta Baja
  delay(1000);
}

void loop() {
  // Leemos el estado del botón (lógica invertida por INPUT_PULLUP)
  if (digitalRead(pinBoton) == LOW) {
    delay(50); // Pequeño delay para evitar el rebote del botón (debounce)
    
    if (estadoPiso == 0) {
      // Si estamos abajo, subimos al Piso 1
      miServo.write(90);
      estadoPiso = 1;
    } else {
      // Si estamos arriba, bajamos a Planta Baja
      miServo.write(0);
      estadoPiso = 0;
    }
    
    // Esperamos a que el usuario suelte el botón para no repetir el ciclo
    while (digitalRead(pinBoton) == LOW);
    delay(50); 
  }
}