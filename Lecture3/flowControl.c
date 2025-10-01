#include <stdio.h>

int main() {

        int x;

        int y;

        float z;


        printf("Enter your midterm grade");

        scanf("%d" , &x);//we use the & operator before the variable name in the scanf() function to pass the memory address of the variable to the function

        printf("Enter your final grade");

        scanf("%d" , &y);

        z = (x*40/100) + (y*60/100);

        printf("It is your average grade %.2f\n", z);

        if (z>=50 && y>=50)

                printf("You passed!\n");

        else (printf("You failed!\n"));

        return 0;






}