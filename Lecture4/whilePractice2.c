#include <stdio.h>

int main() {

    int counter = 0;
    int numberofstudents = 10;
    int grades;
    int totalgrade = 0;

    printf("Enter the grades of students. ");

    while (counter < numberofstudents) {
        scanf("%d", &grades);

        totalgrade = totalgrade + grades;

        counter = counter + 1;
    }

    float average = totalgrade / numberofstudents;

    printf("Average grade of 10 student = %.2f", average);

    return 0;











}