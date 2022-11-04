/**
 *  Creo un array di istanze di una struct
 */

#include <stdio.h>
#include <string.h>

#define EXIT_SUCCESS 0;

struct Student {
    char name[15];
    float media;
};

int main() {
    //  istanzio 4 studenti dalla struct Student
    struct Student student1 = {"Emanuel", 3.0};
    struct Student student2 = {"Martina", 6.2};
    struct Student student3 = {"Palloccia", 2.0};
    struct Student student4 = {"Timo", 1.8};

    // istanzio un array di studenti
    struct Student students[] = {student1, student2, student3, student4};

    printf("\nMedia degli studenti\n");
    // stampo il nome e la media di ogni studente
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
        printf("%-12s\t %.2f\n", students[i].name, students[i].media);
    }

    return EXIT_SUCCESS;
}