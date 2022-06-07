/*a menu-base program that creates two one-dimensional arrays at runtime and
performs the following operations as chosen by the user. Separate functions should be written for each of
the following operations.
1. Insert an element in the 1st array (if size exceeds the allocated size, use �realloc()�)
2. Sort the 1st array.
3. Sort the 2nd array.
4. Merge the two arrays.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void insertElement(int *ptr1, int size1);
void sortArray1(int *ptr1, int size1);
void sortArray2(int *ptr2, int size2);
void mergeArrays(int *ptr1, int *ptr2, int size1, int size2);
int main()
{
    int *ptr1, *ptr2;
    int size1, size2;
    int ch;
    printf("\nEnter the size of the array1:");
    scanf("%d", &size1);
    ptr1 = (int *)malloc(size1 * sizeof(int));
    printf("\nEnter the size of the array2:");
    scanf("%d", &size2);
    ptr2 = (int *)malloc(size2 * sizeof(int));

    printf("\n1. Insert an element in the 1st array.");
    printf("\n2. Sort the 1st array.");
    printf("\n3. Sort the 2nd array.");
    printf("\n4. Merge the two arrays.");

    printf("\nEnter your choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        insertElement(ptr1, size1);
        break;
    case 2:
        sortArray1(ptr1, size1);
        break;
    case 3:
        sortArray2(ptr2, size2);
        break;
    case 4:
        mergeArrays(ptr1, ptr2, size1, size2);
        break;
    default:
        printf("\nYou enter wrong choice.");
        break;
    }

    getch();
    return 0;
}

void insertElement(int *ptr1, int size1)
{
    int element, position, i;
    if (ptr1 == NULL)
    {
        printf("\nMemory is not allocated");
    }
    else
    {
        printf("\nEnter the elements into array1:");
        for (int i = 0; i < size1; i++)
        {
            scanf("%d", (ptr1 + i));
        }
        for (i = 0; i < size1; i++)
        {
            printf("%d\t", ptr1[i]);
        }
        printf("\nEnter elements and position you want to enter:");
        scanf("%d%d", &element, &position);
        position--;
        size1++;
        ptr1 = (int *)realloc(ptr1, size1 * sizeof(int));
        for (i = size1; i != position; i--)

        {
            ptr1[i] = ptr1[i - 1];
        }
        ptr1[i] = element;
        printf("\nAfter inserting the array is:");
        for (i = 0; i < size1; i++)
        {
            printf("%d\t", ptr1[i]);
        }
    }
}
void sortArray1(int *ptr1, int size1)
{
    if (ptr1 == NULL)
    {
        printf("\nMemory is not allocated.");
    }
    else
    {
        printf("\nEnter the elements into array1");
        int i, j;
        for (i = 0; i < size1; i++)
        {
            scanf("%d", (ptr1 + i));
        }
        printf("\nThe array1 is :");
        for (i = 0; i < size1; i++)
        {
            printf("%d\t", ptr1[i]);
        }
        for (i = 0; i < size1; i++)
        {
            for (j = i + 1; j < size1; j++)
            {
                if (ptr1[i] > ptr1[j])
                {
                    int temp = ptr1[i];
                    ptr1[i] = ptr1[j];
                    ptr1[j] = temp;
                }
            }
        }
        printf("\nAfter sorting the array1 is:");
        for (i = 0; i < size1; i++)
        {
            printf("%d\t", ptr1[i]);
        }
    }
}
void sortArray2(int *ptr2, int size2)
{
    if (ptr2 == NULL)
    {
        printf("\nMemory is not allocated.");
    }
    else
    {
        printf("\nEnter the elements into array1:");
        int i, j;
        for (i = 0; i < size2; i++)
        {
            scanf("%d", (ptr2 + i));
        }
        printf("\nThe array1 is :");
        for (i = 0; i < size2; i++)
        {
            printf("%d\t", ptr2[i]);
        }
        for (i = 0; i < size2; i++)
        {
            for (j = i + 1; j < size2; j++)
            {
                if (ptr2[i] > ptr2[j])
                {
                    int temp = ptr2[i];
                    ptr2[i] = ptr2[j];
                    ptr2[j] = temp;
                }
            }
        }
        printf("\nAfter sorting the array1 is:");
        for (i = 0; i < size2; i++)
        {
            printf("%d\t", ptr2[i]);
        }
    }
}
void mergeArrays(int *ptr1, int *ptr2, int size1, int size2)
{
    int *ptr3;
    int i, k = 0;
    if (ptr1 == NULL)
    {
        printf("\nMemory is not allocated.");
    }
    else
    {
        printf("\nEnter the elements into array1:");
        int i, j;
        for (i = 0; i < size1; i++)
        {
            scanf("%d", (ptr1 + i));
        }
        printf("\nThe array1 is :");
        for (i = 0; i < size1; i++)
        {
            printf("%d\t", ptr1[i]);
        }
    }
    if (ptr2 == NULL)
    {
        printf("\nMemory is not allocated.");
    }
    else
    {
        printf("\nEnter the elements into array2:");
        int i, j;
        for (i = 0; i < size2; i++)
        {
            scanf("%d", (ptr2 + i));
        }
        printf("\nThe array2 is :");
        for (i = 0; i < size2; i++)
        {
            printf("%d\t", ptr2[i]);
        }
    }
    ptr3 = (int *)malloc((size1 + size2) * sizeof(int));

    for (i = 0; i < size1; i++)
    {
        ptr3[k] = ptr1[i];
        k++;
    }
    for (i = 0; i < size2; i++)
    {
        ptr3[k] = ptr2[i];
        k++;
    }
    printf("\nAfter merging two arrays the array is :");
    for (i = 0; i < (size1 + size2); i++)
    {
        printf("%d\t", ptr3[i]);
    }
}
