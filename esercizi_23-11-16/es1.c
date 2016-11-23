// Dato un file con N elementi di tipo Int, leggerli e stamparli a video

#include <stdio.h>

void main() {
    // cambiare directory se serve
    FILE *file = fopen("C:\\file_1.txt", "r");
    char buff[255];

    if(file != NULL) {
        while (!feof(file)) {
            fgets(buff, 255, file);
            printf("%s", buff);
        }
        fclose(file);
    } else {
        printf("File not found.");
    }
};