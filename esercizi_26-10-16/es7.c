#include <stdio.h>

// Esercizio 7
// Dato il seguente array {35.4, 46.7, 77.55, 11.1, 9.04, 0.75} di elementi di tipo float,
// eseguirne la MEDIA PONDERATA con pesi pari alla corrispondente posizione inversa, e stamparne il risultato a video
void main() {
    float values[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int size = sizeof(values)/sizeof(values[0]);
    int i = size - 1;
    float avg = 0;
    int weight = 0;

    while(i >= 0) {
        weight += i;
        avg += values[size - 1 - i] * i;
        --i;
    }

    printf("weight: %d\n", weight);

    float total = avg / weight;

    printf("%f", total);

}