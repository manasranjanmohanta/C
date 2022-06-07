/*Write a function using pointers to add two matrices and return the resultant matrix. Use
this function within the main function to add two matrices.*/

#include <stdio.h>
#include <conio.h>

void addTwoMatrix(int row, int col, int a[][col], int b[][col], int result[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(result + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
}
int main()
{
    int row, col;
    printf("\nEnter the rows and columns of the matrices:");
    scanf("%d%d", &row, &col);
    int i, j;

    int a[row][col], b[row][col], result[row][col];
    printf("\nEnter the elements into matrix1:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix1:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the elements into matrix2:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe matrix2:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    addTwoMatrix(row, col, a, b, result);

    printf("\nAfter adding the two matrices the resultant matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
