/* PR8_8.c: Program to calculate the larger of two integers */
#include <stdio.h>
#include <conio.h>

int *checkLargest(int *num1, int *num2)
{
    if (*num1 > *num2)
        return num1;
    else
        return num2;
}

int main()
{
    int num1, num2;
    int *p;
    printf("\nEnter the two integers:");
    scanf("%d%d", &num1, &num2);
    p = checkLargest(&num1, &num2);
    printf("\nThe largest is :%d", *p);

    getch();
    return 0;
}