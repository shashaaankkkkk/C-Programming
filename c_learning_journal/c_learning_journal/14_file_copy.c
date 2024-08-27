#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("dest.txt", "w");
    char ch;
    if (src && dest) {
        while ((ch = fgetc(src)) != EOF) {
            fputc(ch, dest);
        }
        printf("File copied successfully\n");
    } else {
        printf("Error opening files\n");
    }
    fclose(src);
    fclose(dest);
    return 0;
}