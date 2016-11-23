// Dato un file con N elementi di tipo Int,, indicare il maggiore, il minore e il valore medio, stamparne il risultato a video

#include <stdio.h>
#include <stdlib.h>

void sort(int numbers[], int size) {
    int swapped = 0; // 0 = false, 1 = true

    for(int i = 0; i < size - 1; ++i) {
        if(numbers[i] > numbers[i + 1]) {
            int temp = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = temp;
            swapped = 1;
        }

        if(i == size - 1 && swapped == 1) {
            i = 0;
        }
    }
}

void main() {
    // cambiare directory se serve
    FILE *file = fopen("C:\\file_1.txt", "r");
    char buff[255];

    int numbers[5000];
    int i = 0;

    int current;
    int max = 0;
    int min = 0;
    int med = 0;

    if(file != NULL) {
        while (!feof(file)) {
            fgets(buff, 255, file);
            numbers[i] = current;
            ++i;
        }
        sort(numbers, i);
        min = numbers[0];
        max = numbers[i - 1];
        med = numbers[i / 2];
        printf("Min: %d", min);
        printf("Max: %d", max);
        printf("Med: %d", med);
        fclose(file);
    } else {
        printf("File not found.");
    }
};