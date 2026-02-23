Descripción del Hardware del Prototipo
El sistema se basa en una arquitectura de control embebido diseñada para ejecutar la lógica de un ascensor de 4 pisos de manera segura y eficiente.

Componentes Críticos
Microcontrolador (Arduino Uno R3): Es el cerebro del sistema que procesa las señales de entrada de los botones y sensores para gestionar el movimiento del motor mediante lógica de control digital.

Servomotor (DS04-NFC 360 Grados): Actuador principal encargado de la tracción. Al ser de rotación continua, permite el desplazamiento de la cabina a través de los 4 pisos sin las limitaciones de ángulo de un servo estándar.

Estructura y Mecánica
Estructura Híbrida (LEGOS Estralandia + Impresión 3D): Utilizamos un sistema modular. Los bloques de LEGO proporcionan la torre estructural de soporte, mientras que las piezas impresas en Filamento PLA Steren permiten crear rieles y soportes de motor personalizados que no existen comercialmente.

Interruptor (Final de Carrera): Estos sensores mecánicos actúan como dispositivos de seguridad y calibración, enviando una señal al Arduino para detener el motor exactamente cuando la cabina llega a un piso.

Interfaz de Usuario
Botones (Pulsadores Genéricos): Constituyen la interfaz física de llamado. Están configurados para que cualquier usuario pueda solicitar el servicio, simulando los controles de un ascensor real bajo los principios de accesibilidad universal.
