#include <stdio.h>

int main() {


    int speed = 0 ;

    int acceleration = 5 ;

    while ( speed < 50 ) {

        speed = speed + acceleration ;

        printf("Speed is %d\n", speed);

    }

    return 0;


}