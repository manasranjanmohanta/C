/*Write a program to input three numbers and find out the smallest.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;

    // Input of three numbers from the user

    printf("\nEnter three number:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int smallest = num1;
    if (num2 < smallest && num2 < num3)
    {
        printf("%d is the smallest number", num2);
    }
    else if (num3 < smallest && num3 < num2)
    {

        printf("%d is the smallest number", num3);
    }

    else
    {

        printf("%d is the smallest number", smallest);
    }
    getch();
    return 0;
}
