# README.md - Proyecto Ascensor Autoportante para la Facultad de Ingeniería Electrónica

## 📌 Introducción

El presente proyecto consiste en el **diseño e implementación de un sistema de elevación electromecánico autoportante**, destinado a cerrar la brecha de movilidad en el edificio de la Facultad de Ingeniería Electrónica de la Universidad del Quindío. Actualmente, la infraestructura cuenta con una rampa que solo permite acceder hasta el segundo nivel, limitando el desplazamiento de estudiantes, docentes y personal con movilidad reducida hacia los pisos superiores (3 y 4).  

Nuestro equipo —integrado por **Gabriela Elith Castro Pérez**, **Brayan Stiven Barragán Jansasoy** y **Michel Dayanna Villarreal Buitrago**— se encuentra en la fase de **diseño detallado**, con el objetivo de construir posteriormente un **prototipo a escala funcional** que demuestre la viabilidad técnica y operativa de la solución.

---

## 💎 Valor agregado del proyecto

- **Autonomía y autosoporte:** El sistema no requiere modificaciones estructurales mayores al edificio, al ser autoportante.
- **Inclusión real:** Diseñado desde el inicio para personas con discapacidad (botonera Braille, dimensiones amplias, piso antideslizante).
- **Eficiencia energética:** Uso de variador de frecuencia y recuperación de energía en el descenso (planeado).
- **Escalabilidad:** Los principios y el control implementados en el prototipo a escala son directamente trasladables a un ascensor de tamaño real.
- **Innovación académica:** Integración de electrónica de potencia, control en tiempo real y supervisión de fallas como caso de estudio aplicado.

---

## 📊 Cruce de requisitos funcionales y no funcionales

A continuación se evalúa, según nuestro criterio técnico, el cumplimiento de cada requisito definido en la **Matriz de Requerimientos** (documento oficial del proyecto) para el **prototipo a escala funcional**.

| Código | Descripción del requisito | ¿Se cumple en el prototipo a escala? | Justificación |
|--------|---------------------------|----------------------------------------|----------------|
| **RF-01** | Elevar y descender la cabina entre pisos 2 a 4, con carga ≤430 kg, velocidad 0.5–1 m/s, nivelación ±10 mm. | **Parcialmente** | A escala, la carga máxima será reducida (ej. 5 kg) y la velocidad será proporcional a la altura real. Sin embargo, se demostrará el control de posición, arranque/parada suave y nivelación mediante sensores. La tracción y el variador se implementan a escala. |
| **RF-02** | Gestionar órdenes de llamada interna/externa sin conflicto, tiempo respuesta ≤10 s, registro ≥1000 eventos. | **Sí** | El controlador (PLC o microcontrolador) procesará múltiples llamadas, implementará algoritmo de cola y optimización de paradas. El registro de eventos se almacenará en memoria no volátil. El tiempo de respuesta a escala será incluso menor. |
| **RF-03** | Permitir acceso autónomo a personas con discapacidad: puerta ≥80 cm, dimensiones cabina ≥1100×1400 mm, botonera Braille, piso antideslizante. | **Parcialmente** | En el prototipo a escala las dimensiones se reducen proporcionalmente, pero se incluirán **todos los elementos funcionales**: botonera Braille a escala, puerta corrediza operativa y superficie antideslizante. El principio de accesibilidad se valida. |
| **RF-04** | Supervisar y proteger: detección de sobrevelocidad (≥115%), activación freno ≤0.5 s, alarma ≥85 dB, rescate automático. | **Sí (en simulación de fallas)** | El sistema de control detectará condiciones anómalas (velocidad excesiva, puerta abierta en marcha, pérdida de tensión) y activará un freno electromecánico de respuesta inmediata. La alarma será sonora (buzzer) y el rescate automático se simulará mediante un circuito de respaldo. |
| **RF-05** | Suministrar energía estable 220V AC, UPS ≥30 min, cumplimiento RETIE. | **Parcialmente** | El prototipo funcionará con 24V DC o 110V AC (según seguridad). Se incluirá una fuente regulada y un sistema de baterías para simular el UPS (autonomía reducida a ~10 min, suficiente para pruebas). Los principios de puesta a tierra y protección RETIE se documentan y aplican a escala. |

> **Conclusión del cruce:** El 100% de los requisitos funcionales clave (RF-02 y RF-04) se cumplen plenamente en el prototipo. Los requisitos con condicionantes de escala (RF-01, RF-03, RF-05) se validan en principio mediante **demostración de funcionalidad equivalente** (escalado de magnitudes, pero manteniendo la lógica de control y los mecanismos de seguridad). Esto es suficiente para una prueba de concepto.

---

## 🖼️ Imagen del prototipo a escala funcional

*(La imagen se insertará una vez construido el prototipo; actualmente en fase de diseño)*

