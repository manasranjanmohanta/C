/*a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array
and display the largest and smallest among them.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *ptr, size;
    int i, j, temp;
    

    printf("\n\nEnter the size of the array :");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL)
    {
        printf("\nMemory is not allocated.");
        exit(0);
    }
    else
    {
        printf("\nMemory is allocated for %d elements..\nNow", size);

        for (i = 0; i < size; i++)
        {
            printf("\nEnter element %d:", (i + 1));
            scanf("%d", (ptr + i));
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)

        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("\nThe smallest element is %d", *ptr);
    printf("\nThe largest element is %d", *(ptr + size - 1));
    getch();
    return 0;
}
