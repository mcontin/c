// Dato un file con N elementi di tipo Integer, eseguirne la moltiplicazione e stamparla a video

#include <stdio.h>
#include <stdlib.h>

void main() {
    // cambiare directory se serve
    FILE *file = fopen("C:\\file_1.txt", "r");
    char buff[255];

    int mult = 1;

    if(file != NULL) {
        while (!feof(file)) {
            fgets(buff, 255, file);
            mult *= atoi(buff);
        }
        printf("Multiplied: %d", mult);
        fclose(file);
    } else {
        printf("File not found.");
    }
};