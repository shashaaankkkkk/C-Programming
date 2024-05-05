#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s = {"John", 20};
    printf("Name: %s, Age: %d\n", s.name, s.age);
    return 0;
}