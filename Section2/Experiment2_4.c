/*  program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise) */

#include <stdio.h>
#include <conio.h>

int main()
{
    /* variable declaration */
    float decimalPrice;
    int output;

    printf("\nEnter the value in decimal:");
    scanf("%f", &decimalPrice);

    output = decimalPrice * 100;

    printf("\nThe paise is %d", output);

    getch();
    return 0;
}
