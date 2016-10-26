#include <stdio.h>

// Esercizio 1
// Dato un array con N elementi di tipo Integer, stamparli a video, con indicazione sulla posizione del singolo elemento.
// es.: [0] = 25
void main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(values)/sizeof(values[0]);

    for(int i = 0; i < size; ++i) {
        printf("[%d] = %d\n", i, values[i]);
    }
}