/*program to input a character and check whether it is a vowel or consonant using
conditional operator. [Hint: compare against the ASCII range.]*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("\nEnter a character:");
    scanf("%c", &ch);

    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 
    printf("\nIt is a vowel.") : printf("\nIt is a consonant");

    getch();
    return 0;
}
