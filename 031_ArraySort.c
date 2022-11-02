/**
 *  Ordinare un array
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

//  Prototipo
void sort(char[], int);
void printArray(char[], int);

int main() {
    char array[] = {'c', 'd', 'a', 'b', 'z', 'g', 'o', 'n', 'q', 'u', 'm'};
    int arraySize = sizeof(array) / sizeof(array[0]);

    printf("\n");
    sort(array, arraySize);
    printArray(array, arraySize);

    printf("\n\n");
    return EXIT_SUCCESS;
}

void sort(char array[], int size) {
    int temp;

    //  bubble sort
    for (int i = 0; i < size - 1; i++) {      //  ripeto per n elementi dell'array
        for (int j = 0; j < size - 1; j++) {  //  scorro tutti gli elementi dell'array
            if (array[j] > array[j + 1]) {    //  controllo se il primo è più grande del secondo
                //  swappo il valore x con il valore y
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(char array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
}