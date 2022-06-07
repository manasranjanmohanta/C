/* program to take a number as input and check whether it is even or odd using
conditional operator */

#include <stdio.h>
#include <conio.h>

int main()
{
    /* variable declaration */
    int num;

    printf("\nEnter a number:");
    scanf("%d", &num);

    /*if(num%2==0)then
       print it is even.
      else
       print it is odd.
    */
    (num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num);

    getch();
    return 0;
}
