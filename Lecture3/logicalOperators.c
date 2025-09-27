#include <stdio.h>

int main() {

    printf("Enter the amount of money");

    int x;

    float interestrate ;


    scanf("%d", &x);

    if (x>1000 && x<10000) {
        interestrate = 3.2 ;
    }

    else if (x>500 && x<1000) {
        interestrate = 4.5 ;
    }

    else {
        interestrate = 5.5 ;
    }

    printf("The interest is %.2f", interestrate);


    return 0;

}

