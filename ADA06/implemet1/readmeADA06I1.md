Programa: Tabla Hash con sondeo lineal

Descripción:
Programa en C para almacenar, buscar y eliminar estudiantes en una tabla hash usando sondeo lineal. La clave es la matrícula (hasta 6 dígitos numéricos).

Archivos:
- `hashtable.h` - Definición de la estructura `Student` y prototipos.
- `hashtable.c` - Implementación de la tabla hash (insertar, buscar, eliminar, imprimir).
- `main.c` - Interfaz de consola para manejar la tabla (entrada manual de atributos).


Compilación (terminal):

gcc main.c hashtable.c -o programa.exe


Ejecución:

./programa.exe


Uso:
- Seleccione la opción del menú.
- Matrícula: sólo números, hasta 6 dígitos.
- Campos adicionales: nombre, apellido, edad, carrera (entrada por teclado).

Notas:
- La tabla tiene tamaño `TABLE_SIZE` (definido en `hashtable.h`). Puede ajustarse según necesidad.
- Para colisiones se usa sondeo lineal; el borrado marca la ranura como "borrada" para mantener la continuidad del sondeo.

Reflexión personal: 
Esta implementación me permitió comprender de manera más precisa cómo funciona una tabla hash con direccionamiento abierto, en especial el sondeo lineal. A diferencia de las estructuras con encadenamiento, trabajar con colisiones dentro del mismo arreglo requirió poner atención al manejo de estados (vacío, activo y borrado) para asegurar que las búsquedas y eliminaciones se realizaran correctamente. Aunque al inicio fue un reto entender cómo mantener la continuidad del sondeo después de borrar un elemento, la práctica ayudó a visualizar por qué este método es eficiente cuando se trabaja con claves numéricas como las matrículas. En general, esta actividad reforzó la importancia de elegir un buen método para resolver colisiones y organizar datos de manera que puedan recuperarse rápidamente en sistemas reales, como los registros universitarios.