#include <stdio.h>
#include <mem.h>
#include <stdlib.h>

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
            printf("Inserire un numero maggiore di 0.\n");
        }
    } while (end != buf + strlen(buf) && input <= 0);

    return input;
}

char getCabin() {
    char input;
    do {
        scanf(" %c", &input);
    } while (input != 'T' && input != 'R');

    return input;
}

char getVehicle() {
    char input;
    do {
        scanf(" %c", &input);
    } while (input != 'A' && input != 'M');

    return input;
}

float computeCost(int days, int people, char cabin, char vehicle) {
    float total = 0;

    total += 5 * people * days;
    if(cabin == 'T') {
        total += 4 * days;
    } else if (cabin == 'R') {
        total += 4.5 * days;
    }
    if(vehicle == 'A') {
        total += 5.5 * days;
    } else if (vehicle == 'M') {
        total += 3.5 * days;
    }

    return total;
}

int main() {
    int inputDays;
    int inputPeople;
    char inputCabin;
    char inputVehicle;

    printf("Inserire i dati relativi al soggiorno.\n");

    printf("Giorni di permanenza: ");
    inputDays = getPeople();

    printf("Numero di persone: ");
    inputPeople = getPeople();

    printf("Tipo abitacolo (T = tenda, R = roulotte): ");
    inputCabin = getCabin();

    printf("Tipo veicolo (A = auto, M = moto): ");
    inputVehicle = getVehicle();

    float total = computeCost(inputDays, inputPeople, inputCabin, inputVehicle);

    printf("La somma da pagare e' di: %f", total);

    return 0;
}