/* Manipulation of 2D array using pointers */
#include <stdio.h>
#include <conio.h>

int main()
{
    
    int m, n, i, j;

    printf("\nEnter the  number of rows:");
    scanf("%d", &m);

    printf("\nEnter the  number of columnss:");
    scanf("%d", &n);

    int arr[m][n];

    printf("\nEnter the elements into array:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", *(arr + i) + j);
        }
    }

    printf("\nThe array is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    getch();
    return 0;
}