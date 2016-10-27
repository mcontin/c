#include <stdio.h>

void quick_sort_asc(float values[], int size) {
    if(size <= 1) {
        return;
    }

    int pivotIndex = 0;
    int indexToSwap = 1;
    float swapper;

    for(int i = 1; i < size; ++i) {
        if(values[i] < values[pivotIndex]) {
            swapper = values[i];
            values[i] = values[indexToSwap];
            values[indexToSwap] = swapper;
            ++indexToSwap;
        }
    }

    swapper = values[pivotIndex];
    values[pivotIndex] = values[indexToSwap - 1];
    values[indexToSwap - 1] = swapper;

    // left side
    quick_sort_asc(values, pivotIndex);
    // right side
    quick_sort_asc(values + pivotIndex + 1, size - 1 - pivotIndex);
}

void quick_sort_desc(float values[], int size) {
    if(size <= 1) {
        return;
    }

    int pivotIndex = 0;
    int indexToSwap = 1;
    float swapper;

    for(int i = 1; i < size; ++i) {
        if(values[i] > values[pivotIndex]) {
            swapper = values[i];
            values[i] = values[indexToSwap];
            values[indexToSwap] = swapper;
            ++indexToSwap;
        }
    }

    swapper = values[pivotIndex];
    values[pivotIndex] = values[indexToSwap - 1];
    values[indexToSwap - 1] = swapper;

    // left side
    quick_sort_desc(values, pivotIndex);
    // right side
    quick_sort_desc(values + pivotIndex + 1, size - 1 - pivotIndex);
}

//Esercizio 9
//Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
//eseguire l’ordinamento crescente e decrescente, stamparne il risultato a video
void main() {
    float values[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75, 32.1, 64.7, 12.6, 75.1, 765.24, 0.432};
    int size = sizeof(values)/sizeof(values[0]);

    quick_sort_asc(values, size);

    for(int i = 0; i < size; ++i) {
        printf("%.2f ", values[i]);
    }

    printf("\n");

    quick_sort_desc(values, size);

    for(int i = 0; i < size; ++i) {
        printf("%.2f ", values[i]);
    }

}