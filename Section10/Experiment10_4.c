/*program using function to input a m x n matrix (of integers) and then transpose
it.*/

#include <stdio.h>
#include <conio.h>

void transposeOfMatrix(int m, int n, int a[m][n])
{
    int i, j;
    printf("\nEnter the elements into %d x %d matrix:", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose of matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int a[50][50];
    int m, n;
    printf("\nEnter the number of rows:");
    scanf("%d", &m);
    printf("\nEnter the size of th columns:");
    scanf("%d", &n);
    transposeOfMatrix(m, n, a);

    getch();
    return 0;
}
