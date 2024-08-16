#include <stdio.h>

struct Car {
    char name[20];
    int speed;
};

int main() {
    struct Car car1 = {"Ferrari", 200};
    printf("Car: %s, Speed: %d km/h\n", car1.name, car1.speed);
    return 0;
}