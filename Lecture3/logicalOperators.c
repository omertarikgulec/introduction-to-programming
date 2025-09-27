#include <math.h>
#include <stdio.h>

int main() {

    printf("Enter the amount of money");

    int y;

    float interestrate ;


    scanf("%d", &y);

    if (y>1000 && y<10000) {
        interestrate = 3.2 ;
    }

    else if (y>500 && y<1000) {
        interestrate = 4.5 ;
    }

    else {
        interestrate = 5.5 ;
    }

    printf("The interest is %.2f", interestrate);


    return 0;

}

