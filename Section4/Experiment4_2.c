
/*Write a program to input a number and print ODD if the number is odd and EVEN if the number is even.*/
#include <stdio.h>
#include <conio.h>

int main()
{

    int num;

    printf("\nEnter the number:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {

        printf("\nEVEN");
    }
    else
    {
        printf("\nODD");
    }

    getch();
    return 0;
}
