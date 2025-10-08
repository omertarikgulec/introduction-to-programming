/*#include<stdio.h>

int main() {

    int number1=10, number2=20 ;



    printf("number1 + number2 is %d\n" , number1+number2);

    printf("number1 - number2 is %d\n" , number1-number2);

    printf("number1 * number2 is %d\n" , number1*number2);

    printf("number1 / number2 is %.2f\n" ,(float)number1/number2);

    printf("the average of number1 and number2 is %d" , (number1+number2)/2);


    return 0;



    }


#include <stdio.h>

    int main() {

    printf("enter radius of circle: ");

        float radius;
        float x = 3.14;

        scanf("%f",&radius);

        printf("that is area of your circle %.2f\n" , radius*radius*x);
        return 0;

    }

#include <stdio.h>

int main() {

    int number1, number2;

    printf("Enter first number: ");

    scanf("%d", &number1);

    printf("Enter second number: ");

    scanf("%d", &number2);

    if (number1 > number2) {

        printf("the big number is %d" , number1);
    }

    else {

        printf("the big number is %d" , number2);
    }


    return 0;


}

#include <stdio.h>

int main() {

    int x;

    int y;

    float z;


    printf("Enter your midterm grade");

    scanf("%d" , &x);

    printf("Enter your final grade");

    scanf("%d" , &y);

    z = (x*40/100) + (y*60/100);

    printf("It is your average grade %f\n", z);


    if (z>=50 && y>=50){

        printf("You passed!\n");

    }

    else{
        printf("You failed!\n");
    }

    return 0;






}

#include <stdio.h>

int main() {
    int midterm ;

    printf("Enter the midterm grade.");

    scanf("%d",&midterm);

    float y =  (50 - midterm*40/100)/0.6;

    if (midterm >= 50)
    {
        printf(" your final exam has to be >50 ");
    }

    else {
        printf("The minimum score required to pass is %.2f", y);
    }

    return 0;

}

#include <stdio.h>

int main() {

    float midterm , final , average , complementary ;

    printf("Enter the midterm : ");

    scanf("%f" , &midterm);

    printf("Enter the final : ");

    scanf("%f" , &final);

    average = midterm*0.4 + final*0.6;

    complementary = (50 - midterm*40/100)/0.6 ;

    if (average >=50 && final >=50) {

        printf("you passed");

    }

    else {
        if (complementary<50) {

            printf("The minimum score required to pass is 50 ");
        }

      else {
          printf("The minimum score required to pass in compelementary is %.2f" , complementary);
      }
    }

        return 0;


}

#include <stdio.h>

int main() {
    float midterm , final , average ;

    printf("Enter the midterm : ");

    scanf("%f" , &midterm);

    printf("Enter the final : ");

    scanf("%f" , &final);

    average = midterm*0.4 + final*0.6;

    if (average >= 45 && final >= 45) {
        if (average >=90 && average<=100) {
            printf("Average is %.2f\n" , average);
            printf("you passed with AA");
        }
        else if (average >=85 && average<=89) {
            printf("Average is %.2f\n" , average);
            printf("you passed with BA");
        }
        else if (average >=80 && average<=84) {
            printf("Average is %.2f\n" , average);
            printf("you passed with BB");
        }
        else if (average >=70 && average<=79) {
            printf("Average is %.2f\n" , average);
            printf("you passed with CB");
        }
        else if (average >=60 && average<=69) {
            printf("Average is %.2f\n" , average);
            printf("you passed with CC");
        }
        else if (average >=55 && average<=59) {
            printf("Average is %.2f\n" , average);
            printf("you passed with DC");
        }
        else if (average >=45 && average<=54) {
            printf("Average is %.2f\n" , average);
            printf("you passed with DD");
        }
        else{
            printf("Average is %.2f\n" , average);
            printf("you failed with FF");
        }

 }
    else {
        printf("You failed!");
    }

    return 0;


}

    #include <stdio.h>

    int main() {

        int number;

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("Number is even");
        }

        if (number % 2 == 1) {
            printf("Number is odd");
        }










    }

    #include <stdio.h>

int main() {


    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int onesplace = number %10 ;
    int tensplace = (number /10) %10;
    int hundredsplace = (number /100) %10;

    printf("ones place is %d\n" , onesplace);
    printf("tens place is %d\n" , tensplace);
    printf("hundreds place %d\n" , hundredsplace);



    return 0;





}*/