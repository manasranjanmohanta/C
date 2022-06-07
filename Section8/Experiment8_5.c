/*a program which reads a string and prints it in alphabetical order. For example, the
word WELCOME should be displayed as CEELMOW.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char string[40];
    int i, j, temp;

    printf("\nEnter a string:");
    gets(string);

    printf("\nThe entered string is:");
    puts(string);

    for (i = 0; string[i] != '\0'; i++)
    {
        for (j = i + 1; string[j] != '\0'; j++)
        {
            if (string[i] > string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("\nThe string in alphabetically order is:");
    puts(string);

    getch();
    return 0;
}
