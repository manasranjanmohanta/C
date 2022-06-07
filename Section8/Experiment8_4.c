/* a program that reads two strings and then compares them without using the
strcmp() function.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char string1[30], string2[30];
    int i, j, x, y, count = 0;

    printf("\nEnter the first string:");
    gets(string1);
    printf("\nEnter the second string:");
    gets(string2);

    printf("\n\nThe first string is:");
    puts(string1);

    printf("\nThe second string is:");
    puts(string2);

    x = strlen(string1);
    y = strlen(string2);

    if (x == y)
    {
        for (i = 0; i <= x; i++)
        {
            if (string1[i] == string2[i])
                count = 1;
            else
                count = 0;
            break;
        }
    }

    if (count == 1)
        printf("\nStrings are same.");

    else
        printf("\nStrings are not same.");

    getch();
    return 0;
}
