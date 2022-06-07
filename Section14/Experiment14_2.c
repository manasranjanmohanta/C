/*Write a program to find the transpose of a sparse matrix given in 3-tuple from. */

#include <stdio.h>
#include <conio.h>
#define row 4
#define col 5

void convertSparse(int a[][col], int m, int n);
int main()
{
    int a[row][col];
    int i, j;

    printf("\nEnter the elements within the 4X5 sparse matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nEnter the values for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nThe sparse matrix is:\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n\n");
    }
    convertSparse(a, row, col);

    getch();
    return 0;
}

void convertSparse(int a[][col], int m, int n)
{
    int sparse[m * n][3];
    int i, j, r = 1;
    int nonZeroElementCount = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                nonZeroElementCount++;
            }
        }
    }
    sparse[0][0] = m;
    sparse[0][1] = n;
    sparse[0][2] = nonZeroElementCount;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                sparse[r][0] = i;
                sparse[r][1] = j;
                sparse[r][2] = a[i][j];
                r++;
            }
        }
    }
    printf("\nThe sparse matrix is:\n");
    for (i = 0; i < nonZeroElementCount + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", sparse[i][j]);
        }
        printf("\n");
    }

    printf("\nThe transpose of sparse matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < nonZeroElementCount + 1; j++)
        {
            printf("\t%d", sparse[j][i]);
        }
        printf("\n");
    }
}
