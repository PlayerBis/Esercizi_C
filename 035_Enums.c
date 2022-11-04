/**
 *  enum = un tipo definito di identificatore che aiuta la leggibilità del codice
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

//  I valori di enum sono costanti
enum Day { Lun = 1,
           Mar,
           Mer,
           Gio,
           Ven,
           Sab,
           Dom };

int main() {
    //  istanzio un giorno della settimana
    enum Day today = Sab;

    // printf("%d", today);  //  enums non sono stringhe, possono gestire solo gli interi

    //  stampo
    if (today == Sab || today == Dom) {
        printf("\nIn questo giorno non devi lavorare, vai a divertirti!\n");
    } else {
        printf("\nMi dispiace, ma in questo giorno devi lavorare\n");
    }

    return EXIT_SUCCESS;
}