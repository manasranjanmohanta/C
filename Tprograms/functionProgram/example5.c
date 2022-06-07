/* a program using function to input a m x n matrix (of integers) and then find the 
largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it */

#include <stdio.h>
void createMatrix(int matrix[][50], int row, int col)
{
    int i, j;
    printf("Enter the element to the %d X %d Matrix\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void showMatrix(int matrix[][50], int row, int col)
{
    int i, j;
    printf("Entered Matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void print(int arr[100], int size)
{
    printf("\nThe largest integer in the Matrix is : %d\n", arr[size - 1]);
    printf("\nThe 2nd largest integer in the Matrix is : %d\n", arr[size - 2]);
    printf("\nThe smallest integer in the Matrix is : %d\n", arr[0]);
    printf("\nThe 2nd smallest integer in the Matrix is :%d \n", arr[1]);
}
void sort(int matrix[][50], int row, int col)
{
    int arr[100], size, k = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            arr[k] = matrix[i][j];
            k++;
        }
    }
    size = row*col;
    printf("\nThe matarix in linear form is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nAfter sorting the matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    print(arr, size);
}

void main()
{
    int row, col, i, j, k, temp;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);

    int matrix[50][50];
    createMatrix(matrix, row, col);
    showMatrix(matrix, row, col);
    sort(matrix, row, col);
}
