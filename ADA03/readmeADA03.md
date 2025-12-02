
Descripción: 
Este proyecto implementa una Lista Doblemente Ligada (Doubly Linked List) para gestionar información de películas utilizando datos obtenidos desde un archivo Movies.csv. La estructura almacena para cada película atributos como: ID, título, calificación y duración.

El sistema permite ejecutar varias operaciones fundamentales sobre la lista:
-Cargar datos desde el archivo y construir la lista con cada película como un nodo.
-Buscar películas por nombre (coincidencia parcial o exacta), mostrando su información relevante.
-Insertar nuevas películas al final de la lista.
-Eliminar una película por título, confirmando la acción antes de borrar el nodo.
-Actualizar los datos de una película, modificando ID, título, duración o calificación.
-Mostrar un número específico de películas desde el inicio de la lista.
-Liberación completa de memoria al finalizar el programa.

La implementación hace uso de punteros dobles (next y prev) para permitir un recorrido eficiente en ambas direcciones y facilitar operaciones como inserción, eliminación y actualización.

--------------------------------------------------------------
Para compilar (desde terminal):
gcc program.c -o ada3

Para ejecutar 
./ada3.exe 

Nota: Para una prueba correcta, primero selecionar la opción 1 del menú, esto permitira cargar los datos correspondientes del archivo .csv al programa.

--------------------------------------------------------------

Reflexión personal:
Investigar sobre el funcionamiento de las listas doblemente ligadas nos permitió comprender mejor los escenarios reales en los que este tipo de estructura es útil, especialmente cuando se necesita recorrer elementos hacia adelante y hacia atrás o modificar nodos sin afectar el resto de la lista.

Al inicio, el ejercicio nos pareció complejo, ya que se solicitaban varias funcionalidades distintas y todas debían interactuar correctamente sin romper la estructura de la lista. Sin embargo, conforme exploramos, analizamos ejemplos y probamos diferentes métodos, la dificultad comenzó a disminuir. Esto nos hizo notar cómo una buena elección de estructuras de datos —en este caso, las listas doblemente ligadas— puede simplificar de manera significativa la solución de problemas que, en un principio, parecen complicados.