/* PR11_1.c: Program that stores ‘n’ integers (the value of ‘n’ is specified at runtime) in an array and
displays them in reverse order . */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *arr, *i;
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("No space is available.");
        exit(1);
    }
    printf("\nSpace allocated for %d integers", size);

    printf("\nEnter %d integers:", size);
    for (i = arr; i < arr + size; i++)
    {
        scanf("%d", i);
    }
    printf("\nThe array is:");
    for (i = arr; i < arr + size; i++)
    {
        printf("%d ", *i);
    }
    printf("\nThe array in reverse order is:");
    for (i = arr + size - 1; i >= arr; i--)
    {
        printf("%d ", *i);
    }

    getch();
    return 0;
}