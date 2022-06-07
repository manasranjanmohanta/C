#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], i, n, pos, num;
    printf("\nEnter number of elements:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nElements are:");
    for (i = 0; i < n; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
    printf("\nEnter position and element to be inserted:");
    scanf("%d%d", &pos, &num);
    pos--;
    for (i = n; i != pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = num;

    for (i = 0; i < n; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }

    getch();
    return 0;
}
