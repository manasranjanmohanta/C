/*program to input a square matrix (a matrix of order n � n) and check whether it is
symmetric or not (A matrix A = (aij) is symmetric if aij = aji, for all i and j)*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50],b[50][50];
    int i, j, n;
    int isSymmetric;

    printf("\nEnter the order of the matrix:");
    scanf("%d",&n);

    printf("\nEnter the elements into matrix %d x %d:",n,n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // nested for loop used to find out the transpose of matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("\nThe   transpose of matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    isSymmetric = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                isSymmetric = 0;
                break;
            }

        }
    }
    if (isSymmetric == 1)
    {
        printf("\nThis is a Symmetric matrix.");
    }
    else
    {
        printf("\nThis is not a Symmetric matrix.");
    }

    getch();
    return 0;

}
