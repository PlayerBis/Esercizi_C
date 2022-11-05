/**
 *  pointers =  E' simile ad una variabile, punta all'indirizzo di memoria di un'altra variabile,
 *              array, ecc... Alcune task sono più semplici con i puntatori.
 *              * = indirection operator
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

// prototipo
void stampaAge(int *);

int main() {
    int age = 31;
    //  è convenzione dichiarare i puntatori antecedendo la "p" minuscola
    int *pAge = NULL;  //  è buona pratica assegnare NULL quando si dichiara un puntatore
    pAge = &age;

    printf("\nIndirizzo di age: %p\n", &age);
    printf("Valore di pAge: %p\n", pAge);  //  %p = puntatore

    printf("\nDimensione di age: %lld Bytes\n", sizeof(age));
    printf("Dimensione di pAge: %lld Bytes\n", sizeof(pAge));

    printf("\nValore di age: %d\n", age);
    printf("Valore contenuto nell'indirizzo a cui punta pAge: %d\n", *pAge);  //  *pAge = dereferenzazione

    stampaAge(pAge);

    return EXIT_SUCCESS;
}

void stampaAge(int *pAge) {
    printf("\nTu hai %d anni.\n", *pAge);
};