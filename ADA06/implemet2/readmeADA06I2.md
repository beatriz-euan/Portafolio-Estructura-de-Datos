Tabla Hash (Encadenamiento) - Tabla de Símbolos

Descripción:
Programa en C que implementa una tabla hash para almacenar identificadores (claves) con atributos: `clave`, `tipo`, `ambito`, `valor`. Se usa encadenamiento (listas ligadas) para manejar colisiones. La entrada de los atributos es manual por consola.

Archivos:
- `symbol_table.h` - Definición de `Symbol` y prototipos.
- `symbol_table.c` - Implementación de la tabla hash (insertar, buscar, eliminar, imprimir, liberar).
- `main.c` - Menú interactivo para agregar/buscar/eliminar/mostrar.


Compilación (terminal):

gcc main.c symbol_table.c -o symtable.exe

Ejecución:

./symtable.exe

Notas:
- `TABLE_SIZE` está definido en `symbol_table.h` y puede ajustarse.
- Hash utilizado: metodo `djb2`.
- Para colisiones se usa encadenamiento; las operaciones son O(1) en promedio.



Reflexión personal:
En comparación con la primera implementación, esta actividad me resultó un poco más compleja debido al uso de cadenas como claves dentro de la tabla hash. Trabajar con identificadores textuales requiere aplicar funciones de hashing más elaboradas, como el algoritmo djb2, para convertir una cadena en un índice válido. Esto me permitió entender mejor cómo un compilador gestiona internamente los nombres de variables y funciones, así como la importancia de generar valores de hash consistentes.
También pude apreciar por qué el manejo de colisiones con listas ligadas es una estrategia adecuada en estos casos: permite almacenar múltiples identificadores que comparten el mismo índice sin perder información y facilita tanto la búsqueda como la eliminación.
En general, considero que esta actividad fue útil para comprender cómo se implementa una tabla de símbolos y cómo se organizan los atributos asociados a cada identificador. Me ayudó a visualizar la relevancia de estas estructuras dentro del proceso de compilación y reforzó la importancia de diseñar estructuras eficientes para el manejo y acceso rápido a datos.