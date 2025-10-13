#include <stdio.h>

int main() {
    int choice;
    int num1, num2;

    printf("Welcome to the calculator!\n");
    printf("Choose the operation you want to perform\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter -1 to exit\n");

    scanf("%d", &choice);

    while (choice != -1) {
        printf("Enter the two numbers to operate on\n");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                printf("The sum of the two numbers is %d\n", num1 + num2);
                break;
            case 2:
                printf("The difference of the two numbers is %d\n", num1 - num2);
                break;
            case 3:
                printf("The product of the two numbers is %d\n", num1 * num2);
                break;
            case 4:
                printf("The quotient of the two numbers is %d\n", num1 / num2);
                break;
            default:
                printf("Please select a valid operation\n");
                break;
        }

        printf("-----\n");
        printf("Choose the operation you want to perform\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter -1 to exit\n");

        scanf("%d", &choice);
    }

    printf("Goodbye!\n");
    return 0;
}
