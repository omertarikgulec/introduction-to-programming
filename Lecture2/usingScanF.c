#include<stdio.h>

int main() {

    unsigned int x ;

    unsigned int y ;

    float z ;

    printf("please enter your midterm grade. ");

    scanf("%u" , & x);

    printf("please enter your final grade. ");

    scanf("%u" , & y);

    z = (x*40/100) + (y*60/100);

    printf("It is your Grade Average Point %.2f" , z );

    return 0;

}
