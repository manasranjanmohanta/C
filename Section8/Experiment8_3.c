/* program that takes as input a string and two numbers n1 and n2 and find the
substring between these two positions. For example, let the string is “Welcome” and the numbers are
n1=2 and n2=5 then the substring will be: “lcom” */

#include <stdio.h>
#include <conio.h>

int main()
{
    char string[50];
    int i, n1, n2;

    printf("\nEnter a string:");
    gets(string);

    printf("\nEnter the number n1:");
    scanf("%d", &n1);

    printf("\nEnter the number n2:");
    scanf("%d", &n2);

    printf("\nThe substring is:\n");

    for (i = 0; string[i] != '\0'; i++)
    {
        if (n1 - 1 <= i && i <= n2 - 1)
        {
            printf("%c", string[i]);
        }
    }

    getch();
    return 0;
}