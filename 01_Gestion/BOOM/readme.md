#  Lista de Materiales (Bill of Materials - BOM)

Este documento detalla todos los componentes electrónicos, electromecánicos, materiales de manufactura y costos estimados necesarios para ensamblar **una (1) unidad** del sistema **Ascensor Facultad Ingeniería UQ**.

---

##  Electrónica Principal

En esta sección se listan los componentes encargados del procesamiento, control y adquisición del sistema. Constituyen el núcleo funcional del ascensor.

| Ítem | Componente | Cant. | Referencia / Especificación | Función | Est. Costo (COP) |
| :--- | :--- | :---: | :--- | :--- | :---: |
| 1 | **Microcontrolador** | 1 | ESP32 DevKit V1 | Procesamiento principal | $28.000 |
| 2 | **Driver de potencia** | 1 | L298N Dual H-Bridge | Control del motor | $12.000 |
| 3 | **Sensores fin de carrera** | 3 | Micro Switch KW11 | Detección de posición | $15.000 |
| 4 | **Pantalla LCD** | 1 | LCD 16x2 + módulo I2C | Interfaz visual | $18.000 |
| 5 | **Protoboard / PCB** | 1 | Universal doble cara | Integración electrónica | $8.000 |

---

## 🔋 Sistema de Potencia

Componentes responsables del suministro energético y estabilidad eléctrica.

| Ítem | Componente | Cant. | Referencia / Especificación | Función | Est. Costo (COP) |
| :--- | :--- | :---: | :--- | :--- | :---: |
| 6 | **Fuente DC** | 1 | 12V — 2A | Alimentación principal | $22.000 |
| 7 | **Regulador Step Down** | 1 | LM2596 | Regulación de voltaje | $8.000 |
| 8 | **Interruptor** | 1 | SPDT Mini | Encendido general | $2.500 |

---

## 🛠️ Actuación y Mecánica

Elementos encargados del movimiento y estructura física.

| Ítem | Componente | Cant. | Referencia / Especificación | Función | Est. Costo (COP) |
| :--- | :--- | :---: | :--- | :--- | :---: |
| 9 | **Motor DC Alto Torque** | 1 | Motorreductor 12V | Movimiento vertical | $35.000 |
| 10 | **Filamento impresión 3D** | ~50g | PLA/PETG | Fabricación estructura | $10.000 |
| 11 | **Cableado + conectores** | Kit | Jumpers y terminales | Interconexión | $12.000 |

---

## 💰 Resumen de Presupuesto

A continuación se presenta un resumen consolidado de los costos estimados por categoría, permitiendo visualizar la distribución del presupuesto total del sistema por unidad.

| Categoría | Subtotal Estimado |
| :--- | :--- |
| Electrónica y Sensores | $81.000 |
| Potencia y Energía | $32.500 |
| Mecánica e Insumos | $57.000 |

---

## 📍 Proveedores Recomendados

* Arduino UNO y L298N: Electrónicas locales / MercadoLibre  
* Motores y fuentes: Electronilab / Arduino Colombia  
* Impresión 3D: Laboratorio Universidad del Quindío  
* Sensores: Didácticas Electrónicas / Maker Colombia  

---
