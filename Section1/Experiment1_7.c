/*Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2;
    printf("\nEnter the first number is:");
    scanf("%d", &num1);
    printf("\nEnter the second number is:");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nAfter swapping\nThe first number is:%d\nThe second number is:%d\n\n", num1, num2);

    getch();
    return 0;
}
