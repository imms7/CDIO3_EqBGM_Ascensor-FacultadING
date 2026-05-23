# 🧪 Protocolos de Prueba y Validación 

Este directorio contiene los reportes oficiales de pruebas ejecutadas para el proyecto **Ascensor Facultad Ingeniería UQ**. Todas las validaciones siguen criterios de calidad e ingeniería definidos bajo metodología **CDIO + MAHD**, eliminando subjetividad y respaldando resultados mediante **datos medibles y tolerancias verificables**.

> 📊 **Documento Oficial:** [Dar click para observar el protocolo de pruebas]

> 📈 **Dashboard MAHD:** [Dashboard de seguimiento y auditoría](https://docs.google.com/spreadsheets/d/1olTbqtsNHQLktUmsNjpX3Kluv0PxCd3aXZpZllkpnQA/edit?gid=1975843790#gid=1975843790)

---

## 📌 Resumen Ejecutivo de Pruebas (Fase Actual)

A continuación, se presenta el estado de los test ejecutados durante la fase actual de integración de Hardware, Firmware, Mecánica y Seguridad:

| ID Prueba | Subsistema | Objetivo Principal | Resultado Medido | Estado |
| :--- | :--- | :--- | :--- | :---: |
| **TEST-HW-01** | Estructura | Validar alineación y estabilidad mecánica del sistema | Desviación estructural menor a **2 mm** | ✅ **PASS** |
| **TEST-FW-01** | Arduino UNO + Lógica | Verificar respuesta a llamada de pisos | Tiempo promedio respuesta: **1.4 s** | ✅ **PASS** |
| **TEST-ELEC-01** | Driver L298N | Validar alimentación bajo carga | Caída tensión: **0.18 V** | ✅ **PASS** |
| **TEST-SENS-01** | Sensores fin de carrera | Validar detección correcta de nivel | 100% de detección en 15 pruebas | ✅ **PASS** |
| **TEST-SEG-01** | Sistema de parada | Verificar activación de seguridad | Activación correcta < **500 ms** | 🟡 **VALIDANDO** |
| **TEST-MEC-02** | Sistema de desplazamiento | Evaluar vibraciones durante movimiento | Vibración moderada observada | 🟡 **EN AJUSTE** |

---

## ⚙️ Metodología de Validación (Definition of Done)

Para que una prueba sea marcada como `✅ PASS` y el componente pueda pasar a la columna **Done** dentro del tablero MAHD, debe cumplir los siguientes pilares:

### 1. Cero subjetividad

No se aceptan expresiones como:

- "funciona bien"
- "se mueve correctamente"
- "parece estable"

Toda validación debe incluir:

- Voltaje (V)
- Tiempo (ms)
- Distancia (mm)
- Peso (kg)
- Velocidad (cm/s)

---

### 2. Setup documentado

Cada protocolo debe incluir:

- Instrumento utilizado
- Configuración
- Responsable
- Fecha
- Evidencia visual

Ejemplos:

- Multímetro digital
- Calibrador Pie de Rey
- Monitor Serial Arduino
- Cronómetro
- Cámara para evidencia

---

### 3. Criterios definidos antes de probar

El resultado esperado debe establecerse antes de ejecutar el ensayo.

Ejemplo:

| Variable | Criterio |
|---|---|
| Tiempo respuesta | < 2 segundos |
| Error posición | < ±2 mm |
| Caída tensión | < 0.5V |
| Activación seguridad | < 500ms |

---

## 🔍 Evidencias asociadas

| Evidencia | Ubicación |
|---|---|
| Videos pruebas funcionales | `/media/videos/` |
| Registro fotográfico | `/media/fotos/` |
| Dashboard MAHD | README principal |
| Protocolos detallados | `/4_Calidad_y_Pruebas/` |
| Retrospectiva IPAC | `/docs/Retrospectiva_IPAC.md` |

---

## 🚨 Observaciones de Ingeniería

Durante la integración se detectaron riesgos asociados a:

- Posibles vibraciones estructurales
- Caídas de tensión en el L298N
- Desalineación de guías
- Interferencia entre sensores y motor

Las acciones correctivas se documentan formalmente dentro de la retrospectiva IPAC.

---

## 🎯 Próximas Validaciones

- [ ] Prueba carga máxima
- [ ] Validación sistema de frenado
- [ ] Integración LCD
- [ ] Validación accesibilidad
- [ ] Pruebas finales V&V
- [ ] Actualización Dashboard MAHD


