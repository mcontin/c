#include <stdio.h>

void quick_sort(float values[], int size) {

    printf("%d\n", size);

    int pivotIndex = 0;
    float pivot = values[pivotIndex];
    int lastBigger = 0;

    for(int i = 1; i < size; ++i) {
        if(values[i] < pivot) {
            float temp = values[i];
            values[i] = values[lastBigger];
            values[lastBigger] = temp;
            lastBigger += 1;
        }
    }

    for(int i = 0; i < size; ++i) {
        printf("%f\n", values[i]);
    }

}

//Esercizio 9
//Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
//eseguire l’ordinamento crescente e decrescente, stamparne il risultato a video
void main() {
    float values[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int size = sizeof(values)/sizeof(values[0]);

    quick_sort(values, size);
}