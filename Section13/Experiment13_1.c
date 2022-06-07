/*a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array
and display their sum and average. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *ptr, size;
    int i, sum = 0, average;

    printf("\nEnter the size of the array:");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL)
    {
        printf("\nMemory is not allocated .");
        exit(0);
    }
    else
    {
        printf("\nMemory is allocated for %d elements..\nNow", size);

        for (i = 0; i < size; i++)
        {
            printf("\nEnter element %d:", (i + 1));
            scanf("%d", (ptr + i));
        }
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }
    average = sum / size;
    printf("\nThe sum is:%d", sum);
    printf("\nAverage is:%d", average);

    getch();
    return 0;
}
