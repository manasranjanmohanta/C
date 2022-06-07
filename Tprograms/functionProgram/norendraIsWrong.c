// #include <stdio.h>
// #include <conio.h>

// void printArray(int m, int n, int a[m][n]);
// int main()
// {
//     int m, n;
//     int i, j;
//     printf("\nEnter the value of the rows and column:");
//     scanf("%d%d", &m, &n);
//     int a[m][n];
//     printf("\nEnter the elements into array:");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printArray(m, n, a);

//     getch();
//     return 0;
// }

// void printArray(int m, int n, int a[m][n])
// {
//     printf("\nThe array is:\n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
#include <conio.h>
#define  m 3
#define  n 3

void printArray(int a[m][n]);
int main()
{
    
    
    int a[m][n];
    printf("\nEnter the elements into array:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printArray(a);

    getch();
    return 0;
}

void printArray( int a[m][n])
{
    printf("\nThe array is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

