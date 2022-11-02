/**
 *  Ordinare un array
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

//  Prototipo
void sort(int[], int);
void printArray(int[], int);

int main() {
    int num[] = {3, 6, 12, 48, 34, 2, 45, 1293, 356, 1, -34, -20};
    int numSize = sizeof(num) / sizeof(num[0]);

    printf("\n");
    sort(num, numSize);
    printArray(num, numSize);

    printf("\n\n");
    return EXIT_SUCCESS;
}

void sort(int array[], int size) {
    int temp;

    //  bubble sort
    for (int i = 0; i < size; i++) {        //  ripeto per n elementi dell'array
        for (int j = 0; j < size; j++) {    //  scorro tutti gli elementi dell'array
            if (array[j] > array[j + 1]) {  //  controllo se il primo è più grande del secondo
                //  swappo il valore x con il valore y
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}