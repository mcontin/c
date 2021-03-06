// Dato un file con N elementi di tipo Integer, eseguirne la media aritmetica e stamparla a video

#include <stdio.h>
#include <stdlib.h>

void main() {
    // cambiare directory se serve
    FILE *file = fopen("C:\\file_1.txt", "r");
    char buff[255];

    int avg = 0;
    int n = 0;

    if(file != NULL) {
        while (!feof(file)) {
            fgets(buff, 255, file);
            ++n;
            avg += atoi(buff);
        }
        avg /= n;
        printf("Average: %d", avg);
        fclose(file);
    } else {
        printf("File not found.");
    }
};