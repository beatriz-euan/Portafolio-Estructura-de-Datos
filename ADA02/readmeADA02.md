

Descripción:
El programa simula un sistema de atención con tres colas independientes, donde cada cliente generado aleatoriamente es asignado a una cola, se registra su llegada y se atiende en orden. Cada cliente posee un número de transacciones que determina su tiempo de servicio, el cual se simula con sleep(). Durante la atención se calcula el tiempo de espera restando la hora de llegada y salida, y dichos valores se acumulan para obtener el promedio por cola. Al finalizar, el programa muestra el número de clientes atendidos y el tiempo promedio de espera en cada cola, liberando finalmente la memoria utilizada. Los procesos mencionados anteriormente se raelizan implementando una estructura de datos de tipo cola (FIFO) empleados de forma manual. Incluyendo sus operaciones básicas: encolar (enqueue), desencolar (dequeue), comprobación de cola vacía, y la función que muestra los elementos de la cola.

--------------------------------------------------------------
Compilación (Desde terminal):
gcc program.c -o program.exe

Ejecutar:
.\program.exe

--------------------------------------------------------------


Reflexión:

La simulación desarrollada permitió analizar el funcionamiento de un sistema de atención con múltiples colas, mostrando cómo las estructuras de datos —particularmente las colas— son esenciales para modelar procesos reales donde el orden de llegada y la gestión del tiempo son factores clave. En lo personal, identificar en que parte del problema se requería una estructura de cola no fue complicado; lo desafiante fue implementar correctamente las funciones y ajustarlas a los demás requisitos del programa. Además, la simulación no representó por completo el funcionamiento real de un sistema de cajeros, ya que la atención se procesó de manera independiente para cada cola y los clientes se atendieron uno por uno, sin lograr una lectura simultánea de las tres colas. Aun así, el proyecto permitió comprender cómo la programación puede recrear escenarios reales para evaluar su eficiencia y entender mejor el impacto de la asignación de recursos y la variabilidad en los tiempos de servicio.

