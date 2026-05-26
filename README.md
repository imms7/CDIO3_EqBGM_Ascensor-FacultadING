# README.md - Proyecto Ascensor para la Facultad de Ingeniería

## 📌 Introducción

El presente proyecto consiste en el **diseño e implementación de un sistema de elevación electromecánico autoportante**, destinado a cerrar la brecha de movilidad en el edificio de la Facultad de Ingeniería de la Universidad del Quindío. Actualmente, la infraestructura cuenta con una rampa que solo permite acceder hasta el segundo nivel, limitando el desplazamiento de estudiantes, docentes y personal con movilidad reducida hacia los pisos superiores (3 y 4).  

Nuestro equipo —integrado por **Gabriela Elith Castro Pérez**, **Brayan Stiven Barragán Jansasoy** y **Michel Dayanna Villarreal Buitrago**— con el objetivo de construir posteriormente un **prototipo a escala funcional** que demuestre la viabilidad técnica y operativa de la solución.

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

## 🧩 Cruce de requisitos funcionales vs. logros del prototipo

A continuación se comparan los requisitos funcionales definidos para el ascensor real (edificio) con lo alcanzado en el **prototipo a escala**, justificando su rol como **prueba de concepto**.

| Código | Requerimiento (edificio real) | Logro en prototipo a escala | Estado | Justificación (prueba de concepto) |
|--------|-------------------------------|----------------------------|--------|--------------------------------------|
| **RF-01** | Elevar/descender cabina con carga ≤ 430 kg, velocidad 0.5‑1 m/s, nivelación ±10 mm. | Cabina sube/baja con 100 g (≈1 N) a ~4 cm/s, precisión de parada ±1 mm. | ⚠️ **Parcial** (a escala) | Se demuestra el principio físico de tracción (polea + servo), control PWM y detención por tiempo calibrado. La geometría, fricción y alineación validan la viabilidad del mecanismo a escala real. |
| **RF-02** | Gestionar llamadas internas/externas, tiempo respuesta ≤ 10 s. | Tres pulsadores (P1, P2, P3), lógica de estado (`actual`), respuesta inmediata (< 1 s). | ✅ **Cumplido** (en lógica) | La máquina de estados implementada (Arduino) procesa correctamente las solicitudes, evita movimientos redundantes y decide dirección. Es directamente escalable a un PLC industrial. |
| **RF-03** | Acceso para personas con discapacidad (puerta ≥ 80 cm, botonera braille). | No implementado en prototipo. | ❌ **No aplica** en esta fase | La prueba de concepto se enfoca en el núcleo de control y tracción. La accesibilidad se resolverá en la versión de escala real mediante componentes comerciales (botones braille, puertas anchas). |
| **RF-04** | Supervisión y seguridad (freno ≤ 0.5 s, alarma ≥ 85 dB, rescate automático). | Sin freno de emergencia ni alarma. | ❌ **No aplica** en prototipo | La seguridad crítica se implementará en el diseño final. El prototipo demuestra que el sistema puede detenerse de forma controlada (servo.write(93)) y que los sensores (finales de carrera simulados por tiempo) pueden activar paradas. |
| **RF-05** | Suministro de energía estable (220 V AC, RETIE, UPS ≥ 30 min). | Alimentación 5 V USB (Arduino) o batería externa. | ⚠️ **Parcial** (concepto de autonomía) | Se verifica que el consumo es bajo (~280 mA para el servo, 40 mA para Arduino). El diseño final requerirá una fuente dimensionada, pero el concepto de gestión energética se valida. |

**Leyenda:** ✅ Cumplido / ⚠️ Parcial (a escala) / ❌ No aplica en protot

---

## 🖼️ Imagen del prototipo a escala funcional

https://drive.google.com/file/d/1tvEoEWp8GQCeBsLZhC72FX6D5JAd6xQR/view?usp=drive_link

*(La imagen se insertará una vez construido el prototipo; actualmente en fase de diseño)*

