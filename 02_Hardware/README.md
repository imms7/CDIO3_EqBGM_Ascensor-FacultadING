🏗️ Descripción del Hardware del Prototipo

El sistema se basa en una arquitectura de control embebido diseñada para ejecutar la lógica de un ascensor de 3 pisos (empieza desde el piso) de manera segura, organizada y eficiente.

🧠 Componentes
🕹️ Microcontrolador (Arduino Uno)

Es el cerebro del sistema, encargado de procesar las señales de entrada provenientes de los botones y sensores, y de ejecutar la lógica de control que gobierna el movimiento del actuador. A través de su programación, el Arduino coordina la respuesta del sistema ante las solicitudes de los usuarios y supervisa las condiciones de funcionamiento del prototipo.

⚙️ Servomotor (DS04-NFC 360 Grados)

Actuador principal encargado de generar el movimiento mecánico del sistema. Al tratarse de un servomotor de rotación continua, permite representar el desplazamiento de la cabina entre los 4 pisos del prototipo, simulando la tracción del ascensor dentro de la maqueta.

🧱 Estructura y Mecánica
🏗️ Estructura en Madera MDF e Impresión 3D

La estructura principal del prototipo será elaborada en madera MDF, material seleccionado por su facilidad de corte, bajo costo, resistencia y buena presentación en maquetas. Este material permitirá construir la base, la torre estructural y las escaleras de conexión entre pisos.

Por su parte, el sistema de ascensor, incluyendo la cabina y otras piezas específicas de soporte o guía, será desarrollado mediante impresión 3D. Esto permitirá fabricar componentes personalizados con mayor precisión geométrica y adaptarlos a las necesidades del diseño del prototipo.

🛑 Interruptor (Final de Carrera)

Estos sensores mecánicos actúan como dispositivos de seguridad y referencia de posición, enviando una señal al Arduino para detener el movimiento del actuador cuando la cabina alcanza un punto determinado. Su función es mejorar la precisión del sistema y evitar sobre recorridos dentro del prototipo.

👥 Interfaz de Usuario
🔘 Botones (Pulsadores Genéricos)

Constituyen la interfaz física de llamado del sistema. Permiten que el usuario solicite el desplazamiento entre pisos, simulando el funcionamiento básico de los controles de un ascensor real. Su implementación dentro del prototipo busca representar una interacción sencilla, directa y comprensible, acorde con los principios de accesibilidad.

Documentación generada para el Proyecto de Transporte Vertical - Uniquindío 2026
