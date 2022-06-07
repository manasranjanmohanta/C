/*a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50], b[50][50], c[100][100];
    int ch, n;
    int i, j, k;
    int sum;

    printf("\n1.A+B");
    printf("\n2.A-B");
    printf("\n3.B-A");
    printf("\n4.AxB");
    while (1)
    {
        printf("\n\nEnter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter the order of the matrix:");
            scanf("%d", &n);

            printf("\nEnter the elments into  matrix A:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\nEnter the elments into  matrix B:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("\nThe A+B is :\n");
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", c[i][j]);
                }

                printf("\n");
            }
            break;
        case 2:
            printf("\nEnter the order of the matrix:");
            scanf("%d", &n);

            printf("\nEnter the elments into  matrix A:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\nEnter the elments into  matrix B:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }
            printf("\nThe A-B is :\n");
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", c[i][j]);
                }

                printf("\n");
            }

            break;
        case 3:
            printf("\nEnter the order of the matrix:");
            scanf("%d", &n);

            printf("\nEnter the elments into  matrix A:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\nEnter the elments into  matrix B:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    c[i][j] = b[i][j] - a[i][j];
                }
            }
            printf("\nThe B-A is :\n");
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", c[i][j]);
                }

                printf("\n");
            }
            break;
        case 4:

            printf("\nEnter the order of the matrix:");
            scanf("%d", &n);

            printf("\nEnter the elments into  matrix A:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\nEnter the elments into  matrix B:", n, n);
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    sum = 0;

                    for (k = 0; k < n; k++)
                    {
                        sum = sum + a[i][k] * b[k][j];
                        c[i][j] = sum;
                    }
                }
            }
            printf("\nThe A*B is :\n");
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%d\t", c[i][j]);
                }

                printf("\n");
            }
            break;
        default:
            printf("You enter something wrong.");
            break;
        }
    }

    getch();
    return 0;
}