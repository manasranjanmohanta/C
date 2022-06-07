/*A program using pointers to compute the sum of all elements stored in a 1D array */

#include <stdio.h>
#include <conio.h>

int main()
{
    int *p, size;
    int i;
    int sum = 0;

    printf("\nEnter the size of the  array:");
    scanf("%d", &size);
    int arr[size];
    p = arr;

    printf("\nEnter the elements into array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", p + i);
        sum = sum + *(p + i);
    }

    printf("\nThe array is:");
    for (i = 0; i < size; i++)
    {
        printf("%d    ", *(p + i));
    }
    printf("\nthe sum of the array is:%d", sum);

    getch();
    return 0;
}