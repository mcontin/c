#include <stdio.h>
#include <mem.h>
#include <stdlib.h>

#define MAX_LENGTH 256

int fourPeopleHouses = 7;
int threePeopleHouses = 3;

typedef struct person_el{
    int age;
    char name[MAX_LENGTH];
    char surname[MAX_LENGTH];
} person;

typedef struct booking_el{
    int peopleAmount;     // il numero di persone formanti il gruppo
    person * people[MAX_LENGTH];
} booking;

int getPeople() {
    int input = -1;

    char *end;
    char buf[50];
    do {
        if (!fgets(buf, sizeof buf, stdin))
            break;
        // remove \n
        buf[strlen(buf) - 1] = 0;

        input = strtol(buf, &end, 10);
        if(input <= 0) {
            printf("Inserire un numero compreso tra 1 e 4.\n");
        }
    } while (end != buf + strlen(buf) && (input < 1 || input > 4));

    return input;
}

int getAge() {
    int input = -1;

    char *end;
    char buf[50];
    do {
        if (!fgets(buf, sizeof buf, stdin))
            break;
        // remove \n
        buf[strlen(buf) - 1] = 0;

        input = strtol(buf, &end, 10);
        if(input <= 0) {
            printf("Inserire un numero maggiore o uguale a zero: \n");
        }
    } while (end != buf + strlen(buf) && input < 0);

    return input;
}

int tryRent(booking * book) {
    if(book->peopleAmount > 3) {
        if(fourPeopleHouses > 0) {
            fourPeopleHouses--;
        } else {
            printf("Case da 4 finite!\n");
        }
    } else {
        if(threePeopleHouses > 0) {
            threePeopleHouses--;
        } else if(fourPeopleHouses > 0) {
            printf("Le case da 3 sono finite ma sono disponibili %d case da 4 posti.\n", fourPeopleHouses);
        } else {
            printf("Nessun posto disponibile!\n");
        }
    }

    return 0;
}

int main() {
    int people;
    char surname[MAX_LENGTH];
    booking * booking = malloc(sizeof(booking));
    person * person = malloc(sizeof(person));

    printf("Inserire per quante persone si vuole prenotare (da 1 a 4): ");
    people = getPeople();

    booking->peopleAmount = people;

    for(int i = 0; i < people; ++i) {
        printf("Nome della persona: ");
        scanf("%s", person->name);

        printf("Cognome della persona: ");
        scanf("%s", person->surname);

        printf("Eta' della persona: ");
        person->age = getAge();

        booking->people[i] = person;
    }

    return 0;
}
