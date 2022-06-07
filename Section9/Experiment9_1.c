/*program using pointers to input a 4 X 5 matrix and then display it */

#include <stdio.h>
#include <conio.h>

int main()
{
    int p[4][5];
    int i, j;

    printf("\nEnter the elements into 4 x 5 matrix:");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", *(p + i) + j);
        }
    }
    printf("\nThe matrix is:\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    getch();
    return 0;
}
