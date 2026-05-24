# 📊 Dashboard MAHD — Proyecto Ascensor Facultad Ingeniería UQ

**Proyecto:** Ascensor Facultad Ingeniería UQ  
**Versión:** 2.0  
**Fecha actualización:** 2026-05-23  
**Metodología:** CDIO + MAHD  

---

## 🚦 Estado General del Proyecto

| Área | Estado | Avance | Responsable | Próximo Hito |
|:---|:---:|:---:|---|---|
| **01 Gestión y Planeación** | 🟢 | 95% | Equipo BGM | Cierre documental |
| **02 Diseño Hardware** | 🟡 | 80% | Equipo Mecánico/Electrónico | Integración estructura y pruebas |
| **03 Firmware y Control** | 🟢 | 85% | Equipo Software | Integración LCD + sensores |
| **04 Calidad y Pruebas** | 🟡 | 65% | Equipo Calidad | Validación V&V |
| **05 Dashboard MAHD** | 🟢 | 90% | Equipo BGM | Auditoría S12 |
| **06 Dossier Técnico** | 🟡 | 70% | Equipo completo | Consolidación final |

---

## 📈 Progreso de Sprints

### Sprint 1 — Diseño y Planeación
- [x] Definición del problema
- [x] Análisis de interesados
- [x] Contexto y descripción
- [x] Requerimientos funcionales
- [x] Requerimientos no funcionales
- [x] Diseño conceptual

---

### Sprint 2 — Diseño y Arquitectura

- [x] Diseño de planos DWG
- [x] Selección de componentes (BOM)
- [x] Arquitectura del sistema
- [x] Diseño electrónico preliminar
- [x] Protocolo de costos
- [x] Integración Dashboard MAHD

---

### Sprint 3 — Implementación

- [x] Lógica base Arduino
- [x] Configuración sensores
- [x] Implementación inicial control
- [x] Integración GitHub
- [ ] Integración LCD
- [ ] Integración completa subsistemas

---

### Sprint 4 — Validación

- [ ] Pruebas de carga máxima
- [ ] Validación de frenado
- [ ] Pruebas de nivelación
- [ ] Validación accesibilidad
- [ ] Documentación IPAC final

---

## 📋 Estado MAHD

| Indicador | Estado |
|---|:---:|
| Arquitectura definida | ✅ |
| Requerimientos trazables | ✅ |
| Evidencias en GitHub | ✅ |
| Costos auditables | ✅ |
| Dashboard desplegado | ✅ |
| Protocolos de prueba | 🟡 |
| Validación física | 🟡 |
| Integración final | 🟡 |

### Nivel de Madurez Actual:

🟡 **Nivel Empírico → Transición a Ingeniería**

**Observación:** El proyecto ya posee estructura, documentación y trazabilidad. Se requiere completar pruebas físicas y validación formal para alcanzar nivel Ingeniería.

---

## ⚠️ Riesgos Críticos

### Riesgo Mecánico
**Descripción:** Posible desalineación de rieles y estructura.

**Impacto:**
- Vibraciones
- Movimiento inestable
- Error de posicionamiento

**Mitigación:**
- Ajuste estructural
- Validación dimensional
- Pruebas de desplazamiento

---

### Riesgo Eléctrico

**Descripción:** Caída de tensión en el puente H L298N durante carga.

**Impacto:**
- Disminución torque motor
- Fallas de movimiento
- Reinicios del sistema

**Mitigación:**
- Capacitores desacoplo
- Fuente independiente
- Medición bajo carga

---

### Riesgo Software

**Descripción:** Posibles conflictos entre lectura de sensores y control de movimiento.

**Impacto:**
- Retrasos
- Falsas detecciones
- Respuesta lenta

**Mitigación:**
- Máquina de estados (FSM)
- Optimización lógica firmware

---

## 🎯 Próximos Hitos

| Hito | Fecha |
|---|---:|
| Integración completa Hardware | 2026-05-28 |
| Validación sensores | 2026-06-01 |
| Ejecución protocolos V&V | 2026-06-03 |
| Actualización Dashboard MAHD | 2026-06-07 |
| Auditoría técnica | 2026-06-10 |
| Validación cliente S12 | 2026-06-12 |

---

## 🔗 Evidencias

📊 Dashboard MAHD:

📄 `https://docs.google.com/spreadsheets/d/1olTbqtsNHQLktUmsNjpX3Kluv0PxCd3aXZpZllkpnQA/edit?gid=1975843790#gid=1975843790 ` → Dashboard MAHD

📄 `https://github.com/imms7/CDIO3_EqBGM_Ascensor-FacultadING/tree/3c9b2d0ad1103218c737863a28f880567e10d6c6/01_Gestion/IPAC`→ IPAC 

📄 `https://github.com/imms7/CDIO3_EqBGM_Ascensor-FacultadING/tree/3c9b2d0ad1103218c737863a28f880567e10d6c6/01_Gestion/PLANOS_COSTOS` → Costos

📁 `https://github.com/imms7/CDIO3_EqBGM_Ascensor-FacultadING/tree/3c9b2d0ad1103218c737863a28f880567e10d6c6/Protocolo%20de%20Pruebas` → Protocolos de pruebas

📁 `https://drive.google.com/drive/folders/1cOEOZe83AWZ37LFHZk9qx8-4vM8ySf8W?usp=drive_link` → Planos, esquemáticos y CAD


📁 `https://drive.google.com/drive/folders/1UvnTcePurC756GzwkTvJ4SNMuztmmq4X?usp=drive_link` → documentación técnica

---

## Estado de Ingeniería

> El proyecto evolucionó de una implementación empírica hacia un proceso de ingeniería basado en evidencia, trazabilidad y validación continua mediante Dashboard MAHD.
