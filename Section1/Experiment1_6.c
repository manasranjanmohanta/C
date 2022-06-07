/*Program to swap two numbers.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, swap;
    printf("\nEnter the first number:");
    scanf("%d", &num1);
    printf("\nEnter the second number:");
    scanf("%d", &num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("\nAfter swapping\nThe first number is:%d\nThe second number is:%d\n\n", num1, num2);

    getch();
    return 0;
}
