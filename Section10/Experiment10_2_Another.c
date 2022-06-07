/*program using function to take a string as input and then convert all lowercase
characters to its uppercase equivalent.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void toUpper(char s[100])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 97 || s[i] <= 123)
        {
            s[i] = s[i] - 32;
        }
    }
    printf("\nThe string is :\n");
    puts(s);
}
int main()
{
    char s[100];
    printf("\nEnter a string:\n");
    gets(s);

    toUpper(s);

    getch();
    return 0;
}
