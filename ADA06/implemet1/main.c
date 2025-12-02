#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashtable.h"

int main() {
    Student table[TABLE_SIZE];
    init_table(table);

    int option;
    while (1) {
        printf("\n--- Tabla Hash ---\n");
        printf("1) Agregar\n");
        printf("2) Buscar\n");
        printf("3) Eliminar\n");
        printf("4) Mostrar\n");
        printf("5) Salir\n");
        printf("Opcion: ");
        scanf("%d", &option);
        getchar(); /* limpiar salto */

        if (option == 1) {
            Student s;
            printf("Matricula: ");
            scanf("%d", &s.matricula); getchar();
            printf("Nombre: ");
            fgets(s.nombre, 50, stdin); s.nombre[strcspn(s.nombre, "\n")] = 0;
            printf("Apellido: ");
            fgets(s.apellido, 50, stdin); s.apellido[strcspn(s.apellido, "\n")] = 0;
            printf("Edad: ");
            scanf("%d", &s.edad); getchar();
            printf("Carrera: ");
            fgets(s.carrera, 50, stdin); s.carrera[strcspn(s.carrera, "\n")] = 0;

            int r = insert_student(table, s);
            if (r >= 0) printf("Insertado en indice %d.\n", r);
            else printf("No se pudo insertar.\n");

        } else if (option == 2) {
            int mat;
            printf("Matricula a buscar: ");
            scanf("%d", &mat); getchar();
            
            Student found;
            int pos;
            if (search_student(table, mat, &found, &pos)) {
                printf("Encontrado en %d: %d %s %s %d %s\n",
                       pos, found.matricula, found.nombre,
                       found.apellido, found.edad, found.carrera);
            } else {
                printf("No encontrado.\n");
            }

        } else if (option == 3) {
            int mat;
            printf("Matricula a eliminar: ");
            scanf("%d", &mat); getchar();

            if (delete_student(table, mat))
                printf("Eliminado.\n");
            else
                printf("No encontrado.\n");

        } else if (option == 4) {
            print_table(table);

        } else if (option == 5) {
            break;

        } else {
            printf("Opcion invalida.\n");
        }
    }

    return 0;
}
