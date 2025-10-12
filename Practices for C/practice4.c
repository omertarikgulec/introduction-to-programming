#include <stdio.h>
int main() {

    int x;
    int result=1;


    printf("Enter the number you want to find the factorial of:");

    scanf("%d", &x);

    for (;x > 1; x--) {

         result *= x;
    }
    printf("The factorial of your number is %d", result);

    return 0;





}