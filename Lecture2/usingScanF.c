#include<stdio.h>

int main() {

    unsigned int a ;

    unsigned int b ;

    float c ;

    printf("Please enter your midterm grade. ");

    scanf("%u" , & a);

    printf("Please enter your final grade. ");

    scanf("%u" , & b);

    c = (a*40/100) + (b*60/100);

    printf("It is your Grade Average Point %.2f" , c );

    return 0;

}