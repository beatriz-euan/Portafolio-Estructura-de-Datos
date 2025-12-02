#ifndef HASHTABLE_H
#define HASHTABLE_H

#define TABLE_SIZE 100

typedef struct {
    int matricula;
    char nombre[50];
    char apellido[50];
    int edad;
    char carrera[50];
    int state; /* 0 = vacio, 1 = activo, 2 = borrado */
} Student;

void init_table(Student table[]);
int hash_key(int key);
int insert_student(Student table[], Student s);
int search_student(Student table[], int matricula, Student *out, int *pos);
int delete_student(Student table[], int matricula);
void print_table(Student table[]);

#endif
