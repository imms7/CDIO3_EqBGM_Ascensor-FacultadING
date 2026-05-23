# Retrospectiva IPAC — Lecciones Aprendidas

**Proyecto:** Ascensor Facultad Ingeniería UQ  
**Ciclo:** IPAC-03 → IPAC-04  

---

##  ¿Qué falló?

### Fallo 1 — Tiempo de respuesta elevado en llamadas (TEST-FW-01 ❌)

**Síntoma:** El ascensor tarda más de lo esperado en responder a llamadas desde los pisos.

**Causa raíz:** El algoritmo principal procesa simultáneamente lectura de botones, sensores y control del motor dentro de un único ciclo secuencial, generando retardos acumulativos.

**Impacto:** El tiempo de respuesta supera el requerimiento funcional establecido y genera percepción de lentitud para el usuario.

---

### Fallo 2 — Lecturas inconsistentes en sensores de posición (TEST-SENS-02 ❌)

**Síntoma:** El sistema presenta detección errónea del piso actual durante algunas pruebas.

**Causa raíz:** Interferencias eléctricas y ruido generado por el motor afectan la señal de sensores fin de carrera.

**Impacto:** Riesgo de errores de posicionamiento y nivelación de cabina.

---

### Fallo 3 — Vibraciones mecánicas durante desplazamiento (TEST-MEC-01 ❌)

**Síntoma:** La estructura presenta oscilaciones y vibraciones durante el movimiento vertical.

**Causa raíz:** Holguras mecánicas y alineación insuficiente entre guías, estructura y sistema de tracción.

**Impacto:** Movimiento inestable y disminución de percepción de seguridad.

---

### Fallo 4 — Activación tardía del sistema de frenado (TEST-SEG-01 ❌)

**Síntoma:** El sistema tarda más del tiempo esperado en activar mecanismos de seguridad.

**Causa raíz:** Los parámetros de detección y validación de fallos fueron configurados inicialmente con valores de laboratorio y no bajo condiciones reales de operación.

**Impacto:** Riesgo de incumplimiento del requerimiento de seguridad.

---

##  Acciones Correctivas Implementadas / Planificadas

| # | Acción | Tipo | Estado | Responsable |
|---|---|---|---|---|
| AC-01 | Separar control de sensores y lógica de movimiento mediante máquina de estados (FSM) | Firmware | 🚧 En progreso | Equipo Software |
| AC-02 | Implementar filtrado y desacoplo eléctrico para sensores | Hardware | 📋 Planificado | Equipo Electrónico |
| AC-03 | Añadir capacitores y mejorar distribución de alimentación | Hardware | 🚧 En progreso | Equipo Electrónico |
| AC-04 | Reforzar estructura y ajustar alineación mecánica | Mecánica | 🚧 En progreso | Equipo Mecánico |
| AC-05 | Recalibrar sensores y sistema de nivelación | Integración | 📋 Planificado | Equipo Integración |
| AC-06 | Validar sistema de frenado bajo escenarios reales | Seguridad | 📋 Planificado | Equipo Calidad |

---

## 💡 Lo que funcionó bien (Mantener)

1. **Arquitectura modular del sistema:** permitió separar control, sensores y seguridad.

2. **Repositorio GitHub estructurado:** facilitó seguimiento, documentación y trazabilidad.

3. **Uso de Dashboard MAHD:** permitió identificar fallos antes de integración completa.

4. **Matriz de requerimientos temprana:** permitió detectar restricciones de accesibilidad y seguridad desde fases iniciales.

5. **Control de costos:** el proyecto mantuvo variaciones presupuestales dentro de límites aceptables.

---

## 📌 Compromisos para IPAC-04

- [ ] FSM implementada y TEST-FW-01 en estado PASS antes del **2026-06-01**

- [ ] Sensores recalibrados y TEST-SENS-02 en estado PASS antes del **2026-06-03**

- [ ] Estructura reforzada y TEST-MEC-01 re-ejecutado antes del **2026-06-05**

- [ ] Sistema de frenado validado y TEST-SEG-01 en estado PASS antes del **2026-06-08**

- [ ] Actualizar Dashboard MAHD con evidencias y resultados antes del **2026-06-10**

---

## 🚨 Lección de Ingeniería

Las pruebas mostraron que un sistema funcional no garantiza un sistema validado. La integración temprana entre firmware, mecánica y electrónica redujo retrabajos y permitió identificar fallas antes de etapas críticas de validación.
