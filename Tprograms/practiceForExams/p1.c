// find GCD
#include <stdio.h>
#include <conio.h>

int findGCD(int num1, int num2)
{
    int i;
    // if (num1 > num2)
    //     largest = num1;
    // else
    //     largest = num2;

    for (i = num2; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int num1, num2, gcd;
    printf("\nEnter the two numbers:");
    scanf("%d%d", &num1, &num2);
    gcd = findGCD(num1, num2);
    printf("\nThe gcd is:%d", gcd);

    getch();
    return 0;
}