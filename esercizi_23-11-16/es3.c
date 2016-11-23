// Dato un file con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video

#include <stdio.h>
#include <stdlib.h>

void main() {
    // cambiare directory se serve
    FILE *file = fopen("C:\\file_1.txt", "r");
    char buff[255];

    int sum = 0;

    if(file != NULL) {
        while (!feof(file)) {
            fgets(buff, 255, file);
            sum -= atoi(buff);
        }
        printf("Subtraction: %d", sum);
        fclose(file);
    } else {
        printf("File not found.");
    }
};