#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    printf("Value: %d, Address: %p\n", *ptr, ptr);
    return 0;
}