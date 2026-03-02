# 💻 Firmware: Lógica de Control y Automatización

Esta carpeta contiene el código fuente desarrollado en **C++/Arduino** para la gestión inteligente del ascensor de 4 niveles. El firmware actúa como el sistema operativo del prototipo, procesando señales en tiempo real para garantizar un transporte seguro.

---

### 🚀 Funcionalidades Principales

* **🔢 Gestión de Niveles:** Algoritmo de priorización para atender llamados de los 4 pisos de forma eficiente.
* **🎯 Control de Precisión:** Manejo de la señal PWM para el **Servomotor DS04-NFC**, permitiendo arranques y paradas suaves.
* **🛡️ Protocolos de Seguridad:** Interrupciones lógicas activadas por los **Finales de Carrera** para evitar colisiones mecánicas.
* **📟 Telemetría Básica:** Envío de estados y errores al Monitor Serial para facilitar la depuración (Debugging).

---

### 🛠️ Especificaciones Técnicas

* **Plataforma:** Arduino IDE
* **Microcontrolador:** ESP32 (Atmega328P)
* **Librerías utilizadas:** * `Servo.h`: Para el control del motor de rotación continua.
  * `EEPROM.h`: (Opcional) Para guardar la última posición en caso de pérdida de energía.

---
 
### 📥 Instrucciones de Carga

1. Abrir el archivo `.ino` en el **Arduino IDE**.
2. Conectar el **Arduino Uno R3** mediante el cable USB.
3. Seleccionar la placa y el puerto COM correcto.
4. Presionar el botón **Verificar** y luego **Subir**.

---
*Desarrollado para el Ciclo I - Metodología CDIO | Universidad del Quindío*
