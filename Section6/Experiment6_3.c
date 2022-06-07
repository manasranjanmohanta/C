/* program to read �n� characters and then delete the duplicate characters */

#include <stdio.h>
#include <conio.h>

int main()
{
    // declare local variable
    int a[50];
    int size, i, j, k;

    printf("\nEnter the size of the array:");
    scanf("%d", &size);

    printf("\nEnter the elements into arrays:");

    // use for loop to enter the elements one by one in an array
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // use nested for loop to find the duplicate elements in array
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < size - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                // decrease the size after removing duplicate element
                size--;
                j--;
            }
        }
    }
    printf("\nAfter deleting the duplicate numbers the array is:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    getch();
    return 0;
}
