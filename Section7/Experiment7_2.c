/* program to input a square matrix (a matrix of order n × n) and then print its upper
triangular matrix.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50];
    int i, j, n;

    printf("\nEnter the order of the matrix: ");
    scanf("%d", &n);
    printf("\nEnter the elements into matrix:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe required matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j >= i)
                printf("%d\t", a[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }

    getch();
    return 0;
}