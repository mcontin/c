#include <stdio.h>

// Esercizio 4
// Dato un array con N elementi di tipo Float, eseguirne la moltiplicazione e stamparli a video con un numero di cifre decimali pari a 2.
void main() {
    float values[] = {1.432, 2.12456, 3.65432, 4.1928, 5.1929, 6.1231, 7.111111};
    int size = sizeof(values)/sizeof(values[0]);
    float mul = 1;

    for(int i = 0; i < size; ++i) {
        mul *= values[i];
    }
    printf("%.2f", mul);
}