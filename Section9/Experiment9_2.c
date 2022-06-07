/* program using pointers to read an array of integers and print its elements in
reverse order. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int r, c, i, j;
    printf("\nEnter the size of the row :");
    scanf("%d", &r);

    printf("\nEnter the size of the column:");
    scanf("%d", &c);
    int p[r][c];

    printf("\nEnter the elements into matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", *(p + i) + j);
        }
    }
    printf("\nThe matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }

    printf("\nThe matrix  in reverse order is:\n");
    for (i = r - 1; i >= 0; i--)
    {
        for (j = c - 1; j >= 0; j--)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    getch();
    return 0;
}
