#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp) {
        fprintf(fp, "Learning file operations\n");
        fclose(fp);
        printf("File written successfully\n");
    } else {
        printf("File error\n");
    }
    return 0;
}