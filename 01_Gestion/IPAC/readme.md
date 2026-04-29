IPAC
# 🛡️ Planteamiento IPAC - Gestión de Riesgos

El método IPAC se aplica para garantizar la seguridad de los usuarios y la integridad del prototipo.

## 1. Identificación de Riesgos
- **R1:** Atrapamiento en las puertas o cabina.
- **R2:** Fallo eléctrico (cortocircuito).
- **R3:** Ruptura del cable de tracción por sobrecarga.
- **R4:** Fallo de fin de carrera (la cabina no se detiene).

## 2. Priorización y Análisis
| ID | Probabilidad | Impacto | Nivel | Descripción |
| :--- | :--- | :--- | :--- | :--- |
| R4 | Media | Crítico | **ALTO** | Puede causar daño estructural severo. |
| R1 | Baja | Alto | **MEDIO** | Lesiones menores a usuarios. |

## 3. Control y Mitigación
- **Control R4:** Implementación de dos sensores redundantes por piso (Software + Físico).
- **Control R2:** Uso de fusibles térmicos y aislamiento en la PCB diseñada.
- **Control R3:** Factor de seguridad de 3:1 en el cálculo de la cuerda/guaya.
