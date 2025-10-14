#include<stdio.h>
int main() {

    int i;
    float result;

    for (i=-100; i<=100; i++) {
        if (i==0) {
            printf("Error: Cannot divide by zero.\n");
            continue;

        }

        result=1.0/i;
        printf("1/%d = \t%f\n" , i , result);
    }

    return 0;

    }
















