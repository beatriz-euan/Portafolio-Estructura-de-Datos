
Repositorio de ADAs – Curso de Estructura de Datos

Este repositorio reúne todos los programas desarrollados durante el curso de Estructura de Datos, organizados como actividades (ADA01, ADA02, …). Cada práctica aborda una estructura o técnica fundamental y la aplica en un problema real o simulado. El objetivo del repositorio es centralizar el avance del curso, documentar cada implementación y mostrar el uso práctico de conceptos como pilas, colas, tablas hash, manejo de colisiones y simulación de procesos.

A lo largo del desarrollo de estos ADAs se trabajaron temas clave tales como:

- Pilas (Stacks)
- Colas simples y colas múltiples
- Simulación de sistemas de atención
- Listas ligadas para manejo de colisiones
- Tablas hash (encadenamiento y direccionamiento abierto)
- Funciones hash y búsqueda eficiente
- Organización y almacenamiento de datos con estructuras dinámicas

Debajo se proporciona la lista de las actividades realizadas con su respectiva descripción: 

[ADA01 – Pilas (Stacks)](ADA01/)

Tema: Uso de pilas para manipular expresiones.

Problema trabajado: Conversión de expresiones infijas a posfijas empleando una pila para gestionar operadores y prioridades.

El programa utiliza estructuras de datos de tipo pila basadas en memoria dinámica para almacenar temporalmente operadores durante el recorrido de expresiones infijas. Las expresiones se leen desde un archivo (expr_infijas.txt), se procesan mediante el algoritmo Shunting Yard de Dijkstra y se transforman a notación postfija, que se almacena en expr_posfijas.txt. La pila permite manejar la precedencia de operadores y los paréntesis, generando una conversión correcta y automatizada.

[ADA02 – Colas y Simulación de Sistemas](ADA02/)

Tema: Simulación de un sistema de atención con colas (FIFO).

Problema trabajado: Modelación de un sistema con tres colas independientes donde los clientes llegan de forma aleatoria y se atienden en orden, calculando tiempos de espera y promedio por cola.

El programa implementa manualmente estructuras de cola (enqueue, dequeue, verificación de vacío y visualización). Cada cliente posee un número de transacciones que determina su tiempo de servicio, simulado con sleep(). Se registra la hora de llegada, salida y tiempo total de espera, promediando los resultados para cada cola y liberando la memoria al finalizar.

[ADA03 – Lista Doblemente Ligada (Doubly Linked List)](ADA03/)

Tema: Gestión de información mediante listas doblemente enlazadas.

Problema trabajado: Administración de un catálogo de películas leído desde un archivo CSV, permitiendo insertar, buscar, eliminar, actualizar y mostrar registros.

El programa construye una lista doblemente ligada donde cada nodo almacena datos como ID, título, calificación y duración. Permite buscar por nombre, insertar nuevas películas, eliminar nodos previa confirmación, actualizar atributos, mostrar un número definido de registros y liberar toda la memoria usada. La estructura next y prev permite recorrer la lista en ambas direcciones y manejar eficientemente las operaciones.

[ADA04 – Árbol Binario de Búsqueda (ABB)](ADA04/)

Tema: Organización y consulta de información usando un Árbol Binario de Búsqueda.

Problema trabajado: Sistema de gestión de estudiantes donde la matrícula es clave para ordenar, buscar y manipular información, incluyendo calificaciones dinámicas.

El proyecto implementa un ABB para insertar y eliminar estudiantes, actualizar calificaciones específicas, generar listados ordenados por matrícula o promedio, filtrar estudiantes por rango de promedio, contar cuántos tienen promedio menor que otro alumno, mostrar niveles del árbol e imprimirlo visualmente mediante ASCII. Se emplean arreglos dinámicos, structs y funciones modulares que aprovechan las propiedades del ABB para búsquedas eficientes.

[ADA05 – Algoritmos de Ordenamiento (Proyecto Colaborativo)](ADA05/)

Tema: Comparación y aplicación de múltiples algoritmos de ordenamiento.

Problema trabajado: Integración de 10 algoritmos de ordenamiento en un solo programa generado colaborativamente mediante GitHub y pull requests.
Los algoritmos incluidos son: Bubble Sort, Selection Sort, Insertion Sort, Quick Sort, Merge Sort, Cocktail Sort, Heap Sort, Tree Sort, Tournament Sort y Shell Sort.

El programa crea arreglos dinámicos de números flotantes (aleatorios o ingresados por el usuario) y permite aplicar cualquiera de los métodos de ordenamiento. También incorpora funcionalidades como clonado de arreglos, conteo de operaciones y estructuras auxiliares (como árboles binarios para Tree Sort), siendo una práctica centrada en algoritmos y control de versiones.

[ADA06 – Tablas Hash (Dos Implementaciones)](ADA06/)

Tema: Estructuras hash para almacenamiento eficiente y manejo de colisiones.

Problema trabajado: Implementación de dos sistemas: uno para estudiantes usando sondeo lineal, y otro estilo tabla de símbolos con listas ligadas, ambos enfocados en recuperación eficiente aun con colisiones.

[Implementación 1 – Tabla Hash con Sondeo Lineal](ADA06/implemet1/)

Sistema que almacena estudiantes usando la matrícula (hasta 6 dígitos) como clave.
Permite agregar, buscar y eliminar registros dentro de una tabla hash con direccionamiento abierto mediante sondeo lineal. Para mantener la continuidad del sondeo, los espacios eliminados se marcan con un estado especial.

[Implementación 2 – Tabla de Símbolos (Hash con Encadenamiento)](ADA06/implemet2/)

Tabla hash usada como simulación de una tabla de símbolos de compilador.
Cada identificador almacena atributos como clave, tipo, ámbito y valor. Las colisiones se manejan mediante listas ligadas, permitiendo insertar, buscar, eliminar e imprimir identificadores con eficiencia. El menú interactivo facilita manipular los datos desde consola.
