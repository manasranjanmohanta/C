/* program that finds the sum of each row and sum of each column of a matrix*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50];
    int i, j, n;
    int sumOfRows, sumOfColumns;

    printf("\nEnter the order of matrix:");
    scanf("%d", &n);

    printf("\nEnter the elements into matrix %d x %d:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
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
        sumOfRows = 0;
        sumOfColumns = 0;
        for (j = 0; j < n; j++)
        {
            sumOfRows = sumOfRows + a[i][j];
            sumOfColumns = sumOfColumns + a[j][i];
        }
        if (j == 3)
            j = i;
        printf("\n%d.Sum of Row of %d is:%d", i + 1, i + 1, sumOfRows);
        printf("\n  Sum of column of %d is:%d", j + 1, sumOfColumns);
        printf("\n");
    }

    getch();
    return 0;
}
