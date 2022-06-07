/*program that finds the sum of diagonal elements of a square matrix*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50];
    int i, j;
    int n;
    int sumOfDiagonals = 0;

    printf("\nEnter the order of the matrix:");
    scanf("%d", &n);

    printf("\nEnter the elements into matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe elements in the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumOfDiagonals = sumOfDiagonals + a[i][j];
            }
        }
    }
    printf("\nThe sum of diagonals is:%d", sumOfDiagonals);

    getch();
    return 0;
}