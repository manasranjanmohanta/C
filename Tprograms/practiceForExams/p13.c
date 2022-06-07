/* PR11_2.c: Write a program to store a word in a string whose size is determined by the user at
runtime and then modify the same to store a larger word. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char *word;
    int size;
    printf("\nEnter the size of the word:");
    scanf("%d", &size);

    word = (char *)malloc(size * (sizeof(char)));
    if (word == NULL)
    {
        printf("\nSpace is not available.j");
        exit(0);
    }
    printf("\nSpace allocated for %d size", size);
    printf("\nEnter a string: ");
    scanf("%s", word);

    printf("\nYou entered :%s", word);

    printf("\nEnter the size of the new word:");
    scanf("%d", &size);

    printf("\nReallocting memory!");
    word = (char *)realloc(word, size * sizeof(char));
    if (word == NULL)
    {
        printf("No space is available");
        exit(1);
    }
    printf("\nSpace allocated for %d size", size);
    printf("\nEnter the string:");
    scanf("%s", word);

    printf("\nYou entered :%s", word);

    free(word);

    getch();
    return 0;
}
