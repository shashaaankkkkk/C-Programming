#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}}, b[2][2] = {{2, 0}, {1, 2}}, result[2][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}