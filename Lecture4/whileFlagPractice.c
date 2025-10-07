#include <stdio.h>

    int main() {


    int counter = 0;
    int grade ;
    int totalgrade = 0 ;

    printf("Enter the grade , enter -1 for exit ");
        scanf("%d",&grade);

        while(grade != -1) {

            totalgrade = totalgrade + grade;

            counter = counter + 1;

            printf("Enter the grade , enter -1 for exit ");
            scanf("%d",&grade);
        }

    float average = totalgrade / counter;

        printf("The average is %.2f",average);

        return 0;












    }