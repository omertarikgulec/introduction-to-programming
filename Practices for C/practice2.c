#include <stdio.h>

int main() {

    char letter ;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {

        printf("%c is vowel" , letter);
    }
    else { printf("%c is consonant " , letter); }

    return 0;








}