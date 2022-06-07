/* program that requests two float type numbers from the user and then divides the
1st number by the 2nd and displays the result along with the numbers */

#include <stdio.h>
#include <conio.h>

int main()
{
    /* variable declaration*/
    float num1, num2, result;

    /*input from the user*/
    printf("\nEnter the first float number:");
    scanf("%f", &num1);
    printf("\nEnter the second float number:");
    scanf("%f", &num2);

    result = num1 / num2;

    printf("\nThe result after  dividing first number by the second number is:%.2f", result);

    getch();
    return 0;
}
