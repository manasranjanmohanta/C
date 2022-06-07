/*a program that will count the number of occurrences of a specific character in a
given line of text */

#include <stdio.h>
#include <conio.h>

int main()
{
    char string[50];
    char ch;
    int i, count = 0;

    printf("\nEnter  a line of text:");
    gets(string);
    printf("\nEnter a character you want to find out their ocurrence in the  string:");
    scanf("%c", &ch);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ch)
        {
            count++;
        }
    }
    printf("\nThe number of occrrences of %c character is %d", ch, count);

    getch();
    return 0;
}