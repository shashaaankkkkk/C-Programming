#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
        printf("Element %d: %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}