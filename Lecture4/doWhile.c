#include <stdio.h>
int main() {


    int speed = 0;
    int acceleration = 5;

    do {
        speed = speed + acceleration;
        printf("Speed = %d\n", speed);
    }
    while (speed < 50);

    return 0;





}