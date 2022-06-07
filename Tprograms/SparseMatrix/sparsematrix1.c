/* input a sparse matrix and represent in 3-tuple form */

#include <stdio.h>
#include <conio.h>

void convertSparse(int m, int n, int a[][n]);
int main()
{
    int row, col;
    printf("\nEnter the rows of sparse matrix:");
    scanf("%d", &row);

    printf("\nEnter the columns of sparse matrix:");
    scanf("%d", &col);

    int a[row][col];
    int i, j;

    printf("\nEnter the  elements into the %dx%d sparse matrix:", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nEnter the values for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe sparse matrix is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    convertSparse(row, col, a);

    getch();
    return 0;
}

void convertSparse(int m, int n, int a[][n])
{
    int sparse[m * n][3];
    int i, j, nonZeroElementCount = 0;
    int r = 1;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
                nonZeroElementCount++;
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
    printf("\nThe sparse matrix in 3-tuple form is:\n");
    for (i = 0; i < nonZeroElementCount + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", sparse[i][j]);
        }
        printf("\n");
    }
}