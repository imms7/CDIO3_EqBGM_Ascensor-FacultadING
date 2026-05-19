# 🛠️ Instrucciones de Compilación y Carga

## 📋 Requisitos Previos

- Arduino IDE instalado (versión 1.8.19 o superior)
- Cable USB para conectar el Arduino
- Placa Arduino Uno R3 o Arduino Nano

---

## 🚀 Procedimiento de Compilación

### Paso 1: Instalar Arduino IDE

1. Descargar Arduino IDE desde el [sitio oficial](https://www.arduino.cc/en/software)
2. Ejecutar el instalador con opciones por defecto
3. Abrir el IDE después de la instalación

### Paso 2: Configurar la placa

1. Conectar el Arduino a la PC mediante cable USB
2. En el IDE, ir a **Herramientas → Placa → Arduino AVR Boards**
3. Seleccionar:
   - **Arduino Uno** (si usas Uno)
   - **Arduino Nano** (si usas Nano, seleccionar también el procesador: `ATmega328P`)

### Paso 3: Seleccionar el puerto

1. Ir a **Herramientas → Puerto**
2. Seleccionar el puerto que corresponda a tu placa:
   - Windows: `COM3`, `COM4`, etc.
   - Mac/Linux: `/dev/cu.usbmodem` o `/dev/ttyUSB0`

### Paso 4: Crear un nuevo sketch

1. Abrir **Archivo → Nuevo**
2. Eliminar el código por defecto
3. Copiar y pegar el código completo del ascensor

### Paso 5: Verificar la compilación

1. Hacer clic en el botón **✓ Verificar** (checkmark en la esquina superior izquierda)
2. Observar la consola de salida en la parte inferior

**Mensaje de éxito esperado:**

```text
Compilación completada.
El tamaño del sketch es XXXX bytes (XX% del espacio de almacenamiento)
