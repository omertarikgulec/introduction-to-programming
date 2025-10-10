#include <stdio.h>

int main() {
    int x, y;

    while(1) {
        printf("Enter the numbers you want to add , enter 0 for any number to exit: ");
        scanf("%d %d", &x, &y);

        if(x == 0 || y == 0) {
            break;
        }

        printf("The result is %d\n", x + y);
    }

    printf("Goodbye!\n");
    return 0;
}
