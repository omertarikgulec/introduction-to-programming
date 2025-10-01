
#include <stdio.h>

    int main() {

        int option;

        float x , y ;

        printf("Welcome to calculator\n");


        printf("Choose an operation\n");

        printf("1. addition\n");

        printf("2. substraction\n");

        printf("3. multiplication\n");

        printf("4. division\n");

        scanf("%d", &option);


        printf("Enter the numbers to calculate\n");

        scanf("%f %f", &x , &y);

        switch (option) {

            case 1:printf("%.2f\n" , x+y);
                break;// We use break to exit the switch after executing that case.

            case 2:printf("%.2f\n" , x-y);
                break;

            case 3:printf("%.2f\n" , x*y);
                break;

            case 4:printf("%.2f\n" , x/y);
                break;

            default:printf("Enter a valid option\n");
                break;


  }

                return 0;

    }
