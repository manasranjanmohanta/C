/* program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.]*/

#include <stdio.h>
#include <conio.h>

int main()
{
    /* variable declaration */
    int integer;
    int digit1, digit2, digit3, digit4;
    int x, y, sum;

    printf("\nEnter  a four digit integer:");
    scanf("%d", &integer);

    digit1 = integer % 10;
    x = integer / 10;
    digit2 = x % 10;
    y = x / 10;
    digit3 = y % 10;
    digit4 = y / 10;

    sum = digit1 + digit2 + digit3 + digit4;

    printf("\nThe sum of four digits is:%d", sum);

    getch();
    return 0;
}
