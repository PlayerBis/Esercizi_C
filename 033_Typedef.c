/**
 *  typedef = keyword riservata che aggiunge un nickname ad un tipo di dato esistente
 */

#include <stdio.h>
#include <string.h>

#define EXIT_SUCCESS 0;

//  typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;  //  User = Nickname

int main() {
    //  dopo aver utilizzato typedef posso evitare di scrivere "struct"
    User user1 = {"Emanuel", "password123", 123456789};
    User user2 = {"Martina", "password345", 234245234};

    //  stampo
    printf("\nCiao %s.", user1.name);
    printf("\n{id: %d, password: %s}\n\n", user1.id, user1.password);

    printf("\nCiao %s.", user2.name);
    printf("\n{id: %d, password: %s}\n\n", user2.id, user2.password);

    return EXIT_SUCCESS;
}