# Protocolo de Auditoría de Costos — Proyecto Ascensor Facultad ING

**Versión:** 2.0  
**Fecha:** 2026

**Responsable:** Equipo CDIO III Ascensor Facultad ING

---

##  Objetivo
Establecer un control formal de costos del proyecto, permitiendo:
- Comparar costos estimados vs reales
- Detectar desviaciones
- Garantizar viabilidad económica basada en precios del mercado colombiano

---

##  Tabla de Componentes (Valores Reales Colombia 2026)

| Ítem | Componente | Cantidad | Costo Unitario (COP) | Costo Total (COP) | Fuente | Estado |
|------|------------|----------|----------------------|-------------------|--------|--------|
| 1 | Arduino Uno / Microcontrolador | 1 | 28000 | 28000 | Tiendas electrónicas COL | ✅ |
| 2 | Sensores fin de carrera | 3 | 5000 | 15000 | Electrónica local | ✅ |
| 3 | Motor DC | 1 | 6000 | 6000 | Mercado electrónico | ✅ |
| 4 | Driver de motor (L298N) | 1 | 11000 | 11000 | Tienda electrónica | ✅ |
| 5 | Fuente / Batería | 1 | 20000 | 20000 | Proveedor local | ✅ |
| 6 | Estructura (PLA/PETG) | 1 | 10000 | 10000 | Impresión 3D | ✅ |
| 7 | Cables y conectores | 1 | 10000 | 10000 | Misceláneo | ✅ |
| 8 | PCB / Protoboard | 1 | 6000 | 6000 | Electrónica | ✅ |

---

##  Resumen de Costos

| Categoría | Costo (COP) |
|----------|------------|
| Electrónica | 59000 |
| Actuadores | 17000 |
| Estructura | 10000 |
| Otros | 22000 |
| **TOTAL** | **108000** |

---

### 📊 Resumen Real vs Estimado

| Categoría | Estimado | Real | Δ |
|---|:---:|:---:|:---:|
| Electrónica y Sensores | $60.000 | $59.000 | -$1.000 |
| Potencia y Energía | $20.000 | $20.000 | $0 |
| Mecánica e Insumos | $20.000 | $29.000 | +$9.000 |
| **TOTAL** | **$100.000** | **$108.000** | **+$8.000** |

> 🟡 El proyecto presenta una variación del **+8%**, manteniéndose dentro de un rango de **riesgo controlado** según criterios MAHD.

---

## 📁 4. Referencias de Archivos

| Archivo | Descripción | Ubicación |
|---|---|---|
| `esquematico_ascensor.kicad_sch` | Esquemático electrónico del sistema | GitHub `/5_Diseño_Detallado/` |
| `diseno_mecanico_ascensor.stl` | Modelo 3D de la estructura | GitHub `/5_Diseño_Detallado/` |
| `Dashboard_MAHD.xlsx` | Dashboard de seguimiento MAHD | GitHub (raíz) |
| `Protocolos_de_prueba.xlsx` | Protocolos de validación y pruebas | GitHub `/4_Calidad_y_Pruebas/` |
| `protocolo_costos.md` | Documento de auditoría de costos | GitHub `/4_Calidad_y_Pruebas/` |

---

## 🔍 5. Trazabilidad de Evidencia (Para Auditoría)

| Componente | Evidencia | Ubicación |
|-----------|----------|----------|
| Arduino Uno| Factura / Link de compra | `/docs/costos/` |
| Motor DC | Foto + comprobante | `/media/` |
| Sensores | Registro fotográfico | `/media/` |
| Estructura 3D | Archivo STL + foto impresión | `/5_Diseño:_Detallado/` |

---

## Nota de Ingeniería

La variación observada se debe principalmente a:
- Incremento en costos de materiales mecánicos
- Ajustes en insumos de fabricación
- Disponibilidad de proveedores locales

A pesar de esto, el sistema mantiene **viabilidad económica** y control presupuestal bajo criterios MAHD.

