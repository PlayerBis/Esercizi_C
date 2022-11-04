/**
 *  Quiz game = rispondi correttemante a delle domande
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0

int main() {
    char domande[][100] = {"In che anno e' stato pubblicato?",
                           "Chi ha sviluppato il gioco?",
                           "A quale genere appartiene?",
                           "Che cos'e' una wave?",
                           "Quante torri ci sono in totale sulla mappa?",
                           "Quando finisce la partita?"};
    char risposteMultiple[][100] = {
        "A) 2007",
        "B) 2009",
        "C) 2008",
        "D) 2005",

        "A) Riot Games",
        "B) Epic Games",
        "C) Treyarch",
        "D) Microsoft",

        "A) Moba",
        "B) FPS",
        "C) Quiz Game",
        "D) Tower Defense",

        "A) Una meccanica di gioco",
        "B) Un'ondata di minion",
        "C) Una torre particolare",
        "D) Una modalita'",

        "A) 20",
        "B) 23",
        "C) 22",
        "D) 18",

        "A) Quando i minion muoiono",
        "B) Quando il nexus si distrugge",
        "C) Se il team blu prende i draghi",
        "D) Distruggendo tutte le torri",
    };
    char risposte[6] = {
        'B',
        'A',
        'A',
        'B',
        'C',
        'B',
    };
    int numeroDiDomande = sizeof(domande) / sizeof(domande[0]);
    char tentativo[15];
    char tentativoSingleChar;
    int score = 0;

    printf("\n-----------------------------------------------------");
    printf("\nQuiz Game su League Of Legends");
    printf("\n-----------------------------------------------------\n");

    for (int i = 0; i < numeroDiDomande; i++) {
        printf("\n-----------------------------------------------------\n");
        printf("%s", domande[i]);
        printf("\n-----------------------------------------------------\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", risposteMultiple[j]);
        }

        printf("\n> Inserisci la tua risposta: ");
        scanf(" %s", tentativo);  //   pulisco input buffer con lo spazio

        tentativoSingleChar = tentativo[0];
        tentativoSingleChar = toupper(tentativoSingleChar);

        if (tentativoSingleChar == risposte[i]) {
            printf("\n(La risposta e' esatta!)\n");
            score++;
        } else {
            printf("\n(La risposta e' sbagliata!)\n");
        };
    };

    printf("\n-----------------------------------------------------\n");
    printf("Hai totalizzato %d punti!", score);
    printf("\n-----------------------------------------------------\n\n");

    system("PAUSE");
    return EXIT_SUCCESS;
}