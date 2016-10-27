#include <stdio.h>

// Esercizio 8
// Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float, indicare il maggiore,
// il minore e il valore medio, stamparne il risultato a video
void main() {
    float values[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int size = sizeof(values)/sizeof(values[0]);
    float max = values[0];
    float min = values[0];
    float med = values[0];

    for(int i = 0; i < size; ++i) {
        if(values[i] > max) {
            max = values[i];
        }
        if(values[i] < min) {
            min = values[i];
        }
    }

    float temp = 0;
    // the following two loops sort the array x in ascending order
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(values[j] < values[i]) {
                // swap elements
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    if(size % 2==0) {
        // if there is an even number of elements, return mean of the two elements in the middle
        med = ((values[size/2] + values[size/2 - 1]) / 2.0);
    } else {
        // else return the element in the middle
        med = values[size/2];
    }

    printf("max: %f\nmin: %f\nmed: %f", max, min, med);

}