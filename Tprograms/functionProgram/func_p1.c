#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50];
    int i, size, j, temp;

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter the elements into array A:");
    // use for loops enter the elements  one by one into array A
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe array A is:");
    // use for loop to display the array A
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; i < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAscending order is");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    getch();
    return 0;
}