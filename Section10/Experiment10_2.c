/*program using function to take a string as input and then convert all lowercase
characters to its uppercase equivalent.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void toUpper(char s[100])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' || s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        i++;
    }
    printf("\nThe string in upper case is :\n");
    puts(s);
}
int main()
{
    char s[100];

    printf("Enter a string:\n");
    gets(s);
    toUpper(s);

    getch();
    return 0;
}
