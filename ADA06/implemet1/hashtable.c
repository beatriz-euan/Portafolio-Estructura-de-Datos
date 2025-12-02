#include <stdio.h>
#include "hashtable.h"

void init_table(Student table[]) {
    for (int i = 0; i < TABLE_SIZE; i++)
        table[i].state = 0;
}

int hash_key(int key) {
    if (key < 0) key = -key;
    return key % TABLE_SIZE;
}

int insert_student(Student table[], Student s) {
    int index = hash_key(s.matricula);

    for (int i = 0; i < TABLE_SIZE; i++) {
        int pos = (index + i) % TABLE_SIZE;

        if (table[pos].state == 1 && table[pos].matricula == s.matricula)
            return -2;

        if (table[pos].state != 1) {
            table[pos] = s;
            table[pos].state = 1;
            return pos;
        }
    }
    return -1;
}

int search_student(Student table[], int matricula, Student *out, int *pos) {
    int index = hash_key(matricula);

    for (int i = 0; i < TABLE_SIZE; i++) {
        int p = (index + i) % TABLE_SIZE;

        if (table[p].state == 0)
            return 0;

        if (table[p].state == 1 && table[p].matricula == matricula) {
            if (out) *out = table[p];
            if (pos) *pos = p;
            return 1;
        }
    }
    return 0;
}

int delete_student(Student table[], int matricula) {
    int index = hash_key(matricula);

    for (int i = 0; i < TABLE_SIZE; i++) {
        int pos = (index + i) % TABLE_SIZE;

        if (table[pos].state == 0)
            return 0;

        if (table[pos].state == 1 && table[pos].matricula == matricula) {
            table[pos].state = 2;
            return 1;
        }
    }
    return 0;
}

void print_table(Student table[]) {
    printf("Indice | Estado | Matricula | Nombre Apellido | Edad | Carrera\n");

    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i].state == 1) {
            printf("%5d | Activo | %6d | %s %s | %d | %s\n",
                   i, table[i].matricula, table[i].nombre,
                   table[i].apellido, table[i].edad, table[i].carrera);
        }
    }
}
