#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file) {
        fprintf(file, "Learning file I/O in C\n");
        fclose(file);
        printf("File written successfully!\n");
    } else {
        printf("Error opening file\n");
    }
    return 0;
}