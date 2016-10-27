#include <stdio.h>

// Esercizio 6
// Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
// eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
void main() {
    float values[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int size = sizeof(values)/sizeof(values[0]);
    float avg = 0;
    printf("%d\n", size);

    for(int i = 0; i < size; ++i) {
        avg += values[i];
    }

    printf("%f\n", avg);
    avg /= size;
    printf("%f\n", avg);

}