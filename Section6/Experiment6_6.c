/*A menu-based program that takes two linear arrays A and B as input and displays
the results of the following operations based on user�s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.
7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array C.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    // declare local variable
    int a[50], b[50], c[100];
    int choice, size;
    int i, j, n, pos;
    int temp, found;
    int p, q;

    printf("\n 1. Traverse A.");
    printf("\n 2. Traverse B.");
    printf("\n 3. Insert a new element in A (after insertion, the size of A should increase by 1).");
    printf("\n 4. Insert a new element in B (after insertion, the size of B should increase by 1).");
    printf("\n 5. Delete an element from A.");
    printf("\n 6. Delete an element from B.");
    printf("\n 7. Search an element in A.");
    printf("\n 8. Search an element in B.");
    printf("\n 9. Sort A (in ascending order).");
    printf("\n 10. Sort B (in ascending order).");
    printf("\n 11. Merge A and B to form a new array C.");

    // Ask user what he want to do
    printf("\n\nEnter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n\nEnter the size of the array A:");
        scanf("%d", &size);

        printf("\nEnter the elements into array A:");

        // use for loop to enter the elements one by one in an array
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        // display the array A
        printf("\nThe array A is:");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        break;
    case 2:
        printf("\nEnter the size of the array B:");
        scanf("%d", &size);

        printf("\nEnter the elements into array B:");

        // use for loop to enter the elements one by one in an array
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        // display the array B
        printf("\nThe array B is:");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        break;
    case 3:
        printf("\nEnter the size of the array A:");
        scanf("%d", &size);

        printf("\nEnter the elements into array A:");
        // use for loop to enter the elements one by one into array
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array A is:");
        // use for loop to display the array A
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }

        // element and position where to be inserted
        printf("\nEnter the element and position you want to insert:");
        scanf("%d%d", &n, &pos);
        pos--;

        // increase the size by 1
        size++;

        // shifts element forward
        for (i = size; i != pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[i] = n;

        printf("\nAfter inserted the array A is:");
        // display the required array
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    case 4:
        printf("Enter the size of the array B:");
        scanf("%d", &size);

        printf("\nEnter the elements into array B:");
        // use for loop to enter the elements one by one into array
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array B is:");
        // use for loop to display the array B
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }

        // element and position where to be inserted
        printf("\nEnter the element and position you want to insert:");
        scanf("%d%d", &n, &pos);
        pos--;

        // increase the size by 1
        size++;

        // shifts element forward
        for (i = size; i != pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[i] = n;

        printf("\nAfter inserted the array B is:");
        // display the required array
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    case 5:
        // enter the size of the array
        printf("Enter the size of the array A:");
        scanf("%d", &size);

        printf("\nEnter the elements into array A:");
        // use for loop to enter the elements one by one into array A
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array A is:");
        // use for loop to display the elements of array A
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }

        printf("\nEnter the element you want to delete:");
        scanf("%d", &n);

        // delete the element and shifts element backward
        for (i = 0; i < size; i++)
        {
            for (j = i; j < size; j++)
            {
                if (a[i] >= n)
                {
                    a[i] = a[i + 1];
                }
            }
        }
        size--;

        printf("\nAfter delete an element from array A:");
        // for loop to display the required array
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        break;
    case 6:
        // enter the size of the array
        printf("\nEnter the size of the array B:");
        scanf("%d", &size);

        printf("\nEnter the elements into array B:");
        // use for loop to enter the elements one by one into array B
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array B is:");
        // use for loop to display the elements of array B
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }

        printf("\nEnter the element you want to delete:");
        scanf("%d", &n);

        // delete the element and shifts element backward
        for (i = 0; i < size; i++)
        {
            for (j = i; j < size; j++)
            {
                if (a[i] >= n)
                {
                    a[i] = a[i + 1];
                }
            }
        }
        size--;

        printf("\nAfter delete an element from array B:");
        // for loop to display the required array
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        break;
    case 7:
        printf("\nEnter the size of the array A:");
        scanf("%d", &size);

        printf("\nEnter the elements into array A:");
        // use for loop to enter the elements one by one into array
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array A is:");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }

        printf("\nEnter the element to search:");
        scanf("%d", &n);

        // use for loop to search the element
        for (i = 0; i < size; i++)
        {
            if (n == a[i])
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("\n%d is found in array A at position %d", n, i + 1);
        }
        else
        {
            printf("\n%d is not found in array A.", n);
        }
        break;
    case 8:
        printf("\nEnter the size of the array B:");
        scanf("%d", &size);

        printf("\nEnter the elements into array B:");
        // use for loop to enter the elements one by one into array
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array B is:");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }

        printf("\nEnter the element to search:");
        scanf("%d", &n);

        // use for loop to search the element
        for (i = 0; i < size; i++)
        {
            if (n == a[i])
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("\n%d is found in array B at position %d", n, i + 1);
        }
        else
        {
            printf("\n%d is not found in array B.", n);
        }
        break;
    case 9:
        printf("\nEnter the size of the array: ");
        scanf("%d", &size);

        printf("\nEnter the elements into array A:");
        // use for loops enter the elements  one by one into array A
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array A is:");
        // use for loop to display the array A
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }

        for (i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("\n In Ascending order is");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        break;
    case 10:
        printf("\nEnter the size of the array B: ");
        scanf("%d", &size);

        printf("\nEnter the elements into array B:");
        // use for loops enter the elements  one by one into array B
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array B is:");
        // use for loop to display the array B
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }

        for (i = 0; i < size; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("\n In Ascending order is");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        break;
    case 11:
        printf("\nEnter the size of the array A:");
        scanf("%d", &p);

        printf("\nEnter the elements into array A:");
        // use for loop to enter elements one by one into array A
        for (i = 0; i < p; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\nThe array A is:");
        // use for loop to display array A
        for (i = 0; i < p; i++)
        {
            printf("%d", a[i]);
        }

        // Insert element into array B

        printf("\n\nEnter the size of the array B:");
        scanf("%d", &q);

        printf("\nEnter the elements into array B:");
        // use for loop to enter elements one by one into array A
        for (i = 0; i < q; i++)
        {
            scanf("%d", &b[i]);
        }

        printf("\nThe array B is:");
        // use for loop to display arraay B
        for (i = 0; i < q; i++)
        {
            printf("%d", b[i]);
        }

        // Merging array A and B into array C

        for (i = 0; i < p; i++)
        {
            c[j] = a[i];
            j++;
        }

        for (i = 0; i < q; i++)
        {
            c[j] = b[i];
            j++;
        }
        printf("\n\nThe array C is:");
        // use for loop to display array B
        for (i = 0; i < j; i++)
        {
            printf("%d", c[i]);
        }
        break;
    default:
        printf("You enter something wrong");
    }
    getch();
    return 0;
}
