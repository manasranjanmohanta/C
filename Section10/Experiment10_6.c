/*Using pointers, write a function that receives a character string and a character as
arguments and deletes all occurrence of this character in the string. The function should return the
corrected string with no holes */

#include <stdio.h>
#include <conio.h>
#include <string.h>

char *checkAndDelete(char *s, char c);
int main()
{
    char *p;
    char s[50];
    char c;

    printf("\nEnter  a string :");
    gets(s);
    printf("\nThe string is:");
    puts(s);
    printf("\nEnter a character you want to delete the occurrence in the above string: ");
    scanf("%c", &c);

    // p=string;
    // for(int i;string[i]='\0';i++)
    //{
    //  *(p+i)=s[i];
    //}
    p = checkAndDelete(s, c);
    puts(p);
}
char *checkAndDelete(char *s, char c)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {

        if (s[i] == c)
        {
            for (int j = i; j < len; j++)
            {
                s[j] = s[j + 1];
            }

            len--;
        }
    }

    return s;
}
