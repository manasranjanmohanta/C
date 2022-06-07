/* Program to count the number pf digits in number */

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    int count = 0;
    printf("\nEnter a number:");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("\nThe number of digits in an integer:%d", count);

    getch();
    return 0;
}
