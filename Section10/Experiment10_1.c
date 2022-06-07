/*program using function to determine whether a year is a leap year or not.
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void checkLeapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("\nIt is a leap year.");
    }
    else
    {
        printf("\nIt is not a leap year.");
    }
}

int main()
{
    int year;
    printf("\nEnter a year:");
    scanf("%d", &year);

    checkLeapYear(year);

    getch();
    return 0;
}
