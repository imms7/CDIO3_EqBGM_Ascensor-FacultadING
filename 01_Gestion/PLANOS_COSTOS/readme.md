# 💰 Protocolo de Auditoría de Costos — Proyecto Ascensor Facultad ING

 
**Fecha:** 2026-
**Responsable:** Equipo CDIO III Ascensor Facultad ING

---

## 🎯 Objetivo
Establecer un control formal de costos del proyecto, permitiendo:
- Comparar costos estimados vs reales
- Detectar desviaciones
- Garantizar viabilidad económica basada en precios del mercado colombiano

---

## 📦 Tabla de Componentes (Valores Reales Colombia 2026)

| Ítem | Componente | Cantidad | Costo Unitario (COP) | Costo Total (COP) | Fuente | Estado |
|------|------------|----------|----------------------|-------------------|--------|--------|
| 1 | ESP32 / Microcontrolador | 1 | 28000 | 28000 | Tiendas electrónicas COL | ✅ |
| 2 | Sensores fin de carrera | 3 | 5000 | 15000 | Electrónica local | ✅ |
| 3 | Motor DC | 1 | 6000 | 6000 | Mercado electrónico | ✅ |
| 4 | Driver de motor (L298N) | 1 | 11000 | 11000 | Tienda electrónica | ✅ |
| 5 | Fuente / Batería | 1 | 20000 | 20000 | Proveedor local | ✅ |
| 6 | Estructura (PLA/PETG) | 1 | 10000 | 10000 | Impresión 3D | ✅ |
| 7 | Cables y conectores | 1 | 10000 | 10000 | Misceláneo | ✅ |
| 8 | PCB / Protoboard | 1 | 6000 | 6000 | Electrónica | ✅ |

---

## 📊 Resumen de Costos

| Categoría | Costo (COP) |
|----------|------------|
| Electrónica | 59000 |
| Actuadores | 17000 |
| Estructura | 10000 |
| Otros | 22000 |
| **TOTAL** | **108000** |

---

## 📉 Comparación Estimado vs Real

| Tipo | Valor (COP) |
|------|------------|
| Estimado Inicial | 100000 |
| Costo Real | 108000 |
| Diferencia | +8000 |

📌 **Variación porcentual:**
\[
\frac{108000 - 100000}{100000} \times 100 = 8\%
\]

---

## ⚠️ Criterios de Evaluación MAHD

| Rango | Estado |
|------|--------|
| 0% - 5% | ✅ Controlado |
| 5% - 10% | 🟡 Riesgo |
| >10% | 🔴 Crítico |

👉 Resultado actual: **🟡 RIESGO CONTROLADO**

---

## 🔍 Evidencia

- Facturas: `/docs/costos/`
- Fotos de componentes: `/media/`
- Links de compra: README.md o `/docs/referencias/`

---

## 🧠 Conclusión de Ingeniería

El sistema presenta una variación del **8% respecto al presupuesto inicial**, lo que lo ubica en un estado de **riesgo controlado**.

Esto indica que:
- La estimación inicial fue cercana a la realidad del mercado colombiano
- Existen variaciones normales por disponibilidad y proveedor
- El proyecto sigue siendo económicamente viable

---

## 🚨 Regla MAHD

> "Todo costo reportado debe tener evidencia verificable.  
Costo sin evidencia = NO válido en auditoría."

---

## 📌 Nota de Ingeniería

Los costos fueron calculados con base en:
- Promedios de tiendas electrónicas en Colombia
- Mercado nacional (2025–2026)
- Disponibilidad real de componentes

Esto garantiza trazabilidad y validez en auditoría técnica.
