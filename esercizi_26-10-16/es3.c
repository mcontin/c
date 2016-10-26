#include <stdio.h>

// Esercizio 3
// Dato un array con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video
void main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(values)/sizeof(values[0]);
    int sub = 0;

    for(int i = 0; i < size; ++i) {
        sub -= values[i];
    }

    printf("%d", sub);
}