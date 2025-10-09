#include <stdio.h>
int main() {

    int i;
    int sum = 0;

    for (i = 1; i <=100; i++) {
        sum += i;
    }

    printf("The sum of the first hundred numbers %d", sum);

    return 0;

}