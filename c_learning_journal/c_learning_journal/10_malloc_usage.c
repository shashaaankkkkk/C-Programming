#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        printf("Value: %d\n", arr[i]);
    }
    free(arr);
    return 0;
}