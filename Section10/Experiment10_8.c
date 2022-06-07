/*Write a function using pointers that compares two integer arrays to see whether they
are identical. The function returns 1 if they are identical, 0 otherwise.
*/

#include <stdio.h>
#include <conio.h>

int comparesTwoArrays(int size1, int size2, int a[size1], int b[size2])
{
    int i, length;
    if (size1 == size2)
    {
        length = size1 = size2;
        for (i = 0; i < length; i++)
        {
            if (a[i] == b[i])
                continue;
            else
                return 0;
        }
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a[50], b[50];
    int i, j;
    int size1, size2;
    int ch;
    printf("\nEnter the size of the array1:");
    scanf("%d", &size1);

    printf("\nEnter the elements into array1:");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\nEnter the size of the array2:");
    scanf("%d", &size2);
    printf("\nEnter the elements into array2:");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nThe array1 is:");
    for (i = 0; i < size1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe array2 is:");
    for (i = 0; i < size2; i++)
    {
        printf("%d ", b[i]);
    }
    ch = comparesTwoArrays(size1, size2, a, b);
    if (ch == 1)
    {
        printf("\nArrays are identical.");
    }
    else
    {

        printf("\nArrays are dissilar.");
    }
    getch();
    return 0;
}
