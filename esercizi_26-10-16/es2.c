#include <stdio.h>

// Esercizio 2
// Dato un array con N elementi di tipo Integer, eseguirne la somma e stamparla a video
void main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(values)/sizeof(values[0]);
    int sum = 0;

    for(int i = 0; i < size; ++i) {
        sum += values[i];
    }

    printf("%d", sum);
}
