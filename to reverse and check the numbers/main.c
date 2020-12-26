/* A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, original_number, reversed, remainder;
    printf("Hello world!\n");
    printf("\n Please enter a 5 digit number \n");
    scanf("%d", &number);

    //saving the number in to a different variable because the value of the number will change in the program.
    original_number = number;

    printf("\n The number entered is %d \n", number);
//
//    printf("\n The original number is %d \n", original_number);

    //reversing the fifth to the first digit of the reversed number.
    remainder = number % 10;
    reversed = reversed + (remainder * 10000);
    number = number / 10;


//    printf("\n The remainder is %d \n", remainder);
//    printf("\n The reversed number is %d \n", reversed);
//    printf("\n The number entered is %d \n", number);

    //reversing the fourth digit to the second digit of the reversed number.
    remainder = number % 10;
    reversed = reversed + (remainder * 1000);
    number = number / 10;

//
//    printf("\n The remainder is %d \n", remainder);
//    printf("\n The reversed number is %d \n", reversed);
//    printf("\n The number entered is %d \n", number);


    //reversing the third digit to the third digit of the reversed number.
    remainder = number % 10;
    reversed = reversed + (remainder * 100);
    number = number / 10;


//    printf("\n The remainder is %d \n", remainder);
//    printf("\n The reversed number is %d \n", reversed);
//    printf("\n The number entered is %d \n", number);


    //reversing the second digit to the fourth digit of the reversed number.
    remainder = number % 10;
    reversed = reversed + (remainder * 10);
    number = number / 10;

//
//    printf("\n The remainder is %d \n", remainder);
//    printf("\n The reversed number is %d \n", reversed);
//    printf("\n The number entered is %d \n", number);


    //reversing the fourth digit to the second digit of the reversed number.
    remainder = number % 10;
    reversed = reversed + (remainder * 1);
    number = number / 10;


//    printf("\n The remainder is %d \n", remainder);
    printf("\n The reversed number is %d \n", reversed);
//    printf("\n The number entered is %d \n", number);

//checking whether the reversed number is same as the entered number.

if( reversed == original_number)
{
    printf(" \n The entered number = '%d' and the reversed number are the same = '%d' \n", original_number, reversed);
}
else
{
      printf("\n The entered number = '%d' and the reversed number are not the same = '%d'\n", original_number, reversed);

}
    return 0;
}
