/* PR8_11.c: A program to compute the factorial of a number*/

#include <stdio.h>
#include <conio.h>

int factorial(int num)
{
    if (num == 1)
        return 1;
    else
        return (num * factorial(num - 1));
}

int main()
{
    int num,fact;
    printf("\nEnter a num:");
    scanf("%d", &num);
    fact = factorial(num);
    printf("\nThe factorial of a number is:%d", fact);

    getch();
    return 0;
}