/*program using function to input a m x n matrix (of integers) and then transpose
it.*/

#include<stdio.h>
#include<conio.h>

void createMatrix(int m,int n,int a[m][n])
{
    int i,j;
    printf("\nEnter the elements  into %d x %d matrix:",m,n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printMatrix(int m,int n, int a[m][n])
{
    int i,j;
    printf("\nThe matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void transposeOfMatrix(int m,int n,int a[m][n], int b[n][m])

{
    int i,j;
    printf("\nThe transpose of matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[50][50],b[50][50];
    int m,n;
    printf("Enter the rows of matrix:");
    scanf("%d",&m);
    printf("\nEnter the columns of matrix:");
    scanf("%d",&n);
    createMatrix(m,n,a);
    printMatrix(m,n,a);
    transposeOfMatrix(m,n,a,b);

    getch();
    return 0;
}

