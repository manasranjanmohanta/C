/* PR8_12.c: A program to sort an array of 5 integers */
#include <stdio.h>
#include <conio.h>

void sortArray(int a[], int size);
void swap(int *x, int *y);

int main()
{
    int a[50];
    int size, i;
    printf("\nEnter the size of the array:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    sortArray(a, size);
    printf("\nAfter sorting the array is :");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
    return 0;
}
void sortArray(int a[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}