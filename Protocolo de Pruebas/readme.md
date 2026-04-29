PROTOCOLO DE PRUEBAS

# 🧪 Protocolo de Pruebas y Validación

## 1. Pruebas de Unidad (Firmware)
| Prueba | Descripción | Resultado Esperado |
| :--- | :--- | :--- |
| P-F01 | Lectura de botones | El monitor serial detecta el piso llamado. |
| P-F02 | Movimiento motor | El puente H invierte el giro correctamente. |

## 2. Pruebas de Integración (Hardware + Software)
- **Prueba de Parada:** Validar que al activar el `limit_switch`, el motor se detenga en < 0.5s.
- **Prueba de Pantalla:** Verificar que el LCD muestre el piso actual en tiempo real.

## 3. Pruebas de Aceptación (Sistema Completo)
1. **Carga Estática:** Colocar 500g en la cabina y verificar que no haya deformación.
2. **Carga Dinámica:** Ciclo de 10 subidas y bajadas consecutivas sin sobrecalentamiento del L298N.
3. **Emergencia:** Presionar el botón de stop durante el movimiento.
