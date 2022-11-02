/**
 *  2D Array = un array ma con due dimensioni
 *  utile se hai bisogno di una matrice, griglia o tabella di dati
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    char names[][10] = {"Emanuel",
                        "Martina",
                        "Pippo",
                        "Pluto",
                        "Paperino"};

    int rowsNumbers = sizeof(numbers) / sizeof(numbers[0]);           //  totale / prima riga
    int columnsNumbers = sizeof(numbers[0]) / sizeof(numbers[0][0]);  //  prima riga / primo elemento
    printf("\nrowsNumbers: %d, columnsNumbers: %d\n\n", rowsNumbers, columnsNumbers);

    //  stampo numbers[]
    for (int i = 0; i < rowsNumbers; i++) {
        for (int j = 0; j < columnsNumbers; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    //  stampo names[]
    for (int i = 0; i < (sizeof(names) / sizeof(names[0])); i++) {
        for (int j = 0; j < (sizeof(names[0]) / sizeof(names[0][0])); j++) {
            printf("%c", names[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}