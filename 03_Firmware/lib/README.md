## 📚 Dependencias y Librerías

### Librerías Utilizadas

Este proyecto **NO requiere la instalación de librerías externas**. Solo se utilizan las librerías estándar que vienen incluidas por defecto en el Arduino IDE.

| Librería | Origen | Propósito |
|----------|--------|-----------|
| `Servo.h` | Librería nativa de Arduino | Control del servomotor de rotación continua |

### ✅ Ventajas de esta decisión

- **No requiere instalación adicional** – El código compila en cualquier Arduino IDE recién instalado
- **Portabilidad** – El proyecto se puede clonar y compilar en cualquier máquina sin configuración previa
- **Mantenimiento simplificado** – Sin dependencias externas que puedan quedar obsoletas o romperse con actualizaciones

### 📦 Código de inclusión

```cpp
#include <Servo.h>           // Nativa de Arduino IDE

