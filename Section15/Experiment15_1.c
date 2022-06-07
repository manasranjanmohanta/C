/* Write a menu-based program to implement the following operations on a single linked
list based on user’s choice.
1. Create a single linked list.
2. Traverse a single linked list.
3. Insert a node at the beginning.
4. Insert a node at the end.
5. Insert a node at an intermediate position after a given node.
6. Delete the first node.
7. Delete the last node.
8. Delete an intermediate node after a given node.
9. Sorting the node values
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *createASLL(struct node *);
void insertAtEndInSLL(struct node *, int);
void traverseASLL(struct node *);
struct node *insertAtBeginningInSLL(struct node *);
void insertAtPosInSLL(struct node *);
void deleteFirstNodeInSLL(struct node *);
void deleteLastNodeInSLL(struct node *);
struct node *deleteAtPosInSLL(struct node *, int);
void sortTheNodeInSLL(struct node *);

int main()
{
    struct node *head;
    int ch, item, pos;
    printf("\n1. Create a single linked list.");
    printf("\n2. Traverse a single linked list.");
    printf("\n3. Insert a node at the beginning.");
    printf("\n4. Insert a node at the end.");
    printf("\n5. Insert a node at an intermediate position after a given node.");
    printf("\n6. Delete the first node.");
    printf("\n7. Delete the last node.");
    printf("\n8. Delete an intermediate node after a given node.");
    printf("\n9. Sorting the node.\n");
    while (1)
    {

        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            createASLL(head);
            break;
        case 2:
            traverseASLL(head);
            break;
        case 3:
            insertAtBeginningInSLL(head);
            break;
        case 4:
            printf("\nEnter the data you want to insert:");
            scanf("%d", &item);
            insertAtEndInSLL(head, item);
            break;
        case 5:
            insertAtPosInSLL(head);
            break;
        case 6:
            deleteFirstNodeInSLL(head);
            break;
        case 7:
            deleteLastNodeInSLL(head);
            break;
        case 8:

            printf("\nEnter the position where you want to delete:");
            scanf("%d", &pos);
            deleteAtPosInSLL(head, pos);
            break;
        case 9:
            sortTheNodeInSLL(head);
            break;
        default:
            printf("\nYou enter wrong choice.");
        }
    }
    getch();
    return 0;
}

struct node *createASLL(struct node *head)
{
    int item;
    char c;
    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("Linked List is Empty.");
    }

    else
    {
        printf("\nEnter the data into 1st node:");
        scanf("%d", &item);

        head->data = item;
        head->link = NULL;

        printf("\n\nDo you want to add more nodes (press 'Y' or 'y' to continue,any other key to quit)?: ");
        c = getche();

        while (c == 'Y' || c == 'y')
        {
            printf("\nEnter the data you want to add:");
            scanf("%d", &item);

            insertAtEndInSLL(head, item);

            printf("\n\nDo you want to add more nodes (press 'Y' to continue,any other key to quit)?: ");
            c = getche();
        }
    }
    return head;
}

void insertAtEndInSLL(struct node *head, int item)
{
    struct node *current, *ptr;
    ptr = head;
    while (ptr->link != NULL)
        ptr = ptr->link;
    current = malloc(sizeof(struct node));
    if (current == NULL)
    {
        printf("\nOut of memory space.");
    }

    current->data = item;
    current->link = NULL;
    ptr->link = current;

    traverseASLL(head);
}

void traverseASLL(struct node *head)
{
    struct node *ptr;
    ptr = head;
    printf("\nThe linked list is:\n");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
}

struct node *insertAtBeginningInSLL(struct node *head)
{
    int item;
    if (head == NULL)
    {
        printf("\nLinked List is empty.");
    }
    struct node *newNode = malloc(sizeof(struct node));
    printf("\nEnter the data you want to insert:");
    newNode->data = item;
    newNode->link = NULL;

    newNode->link = head;
    head = newNode;

    return head;
}

void insertAtPosInSLL(struct node *head)
{
    struct node *ptr, *ptr2;
    int item, pos;
    printf("\nEnter the data you want to insert:");
    scanf("%d", &item);
    printf("\nEnter the position where you want to insert:");
    scanf("%d", &pos);
    ptr = head;
    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2 = malloc(sizeof(struct node));
    ptr2->data = item;
    ptr2->link = NULL;

    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
void deleteFirstNodeInSLL(struct node *head)
{
    if (head == NULL)
    {
        printf("\nLinked list is empty.");
    }
    else
    {

        struct node *temp;
        temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
}
void deleteLastNodeInSLL(struct node *head)
{
    if (head == NULL)
    {
        printf("\nLinked list is empty.");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    struct node *ptr, *ptr2;
    ptr = head;
    ptr2 = head;
    while (ptr2->link != NULL)
    {
        ptr = ptr2;
        ptr2 = ptr2->link;
    }
    ptr->link = NULL;
    free(ptr2);
    ptr2 = NULL;
}

struct node *deleteAtPosInSLL(struct node *head, int pos)
{
    struct node *ptr, *ptr2;
    ptr = head;
    ptr2 = head;
    if (head = NULL)
    {
        printf("\nLinked List is empty.");
    }
    else if (pos == 1)
    {

        free(head);
        head = NULL;
    }
    else
    {
        printf("\nEnter the positon which data you want to delete:");
        scanf("%d", &pos);
        pos--;
        while (pos != 1)
        {
            ptr = ptr2;
            ptr2 = ptr2->link;
            pos--;
        }
        ptr->link = ptr2->link;
        free(ptr2);
        ptr2 = NULL;
    }
    return head;
}
void sortTheNodeInSLL(struct node *head)
{
    struct node *ptr1, *ptr2;
    int temp;
    ptr1 = head;
    ptr2 = head;
    while (ptr1->link != NULL)
    {
        ptr2 = ptr1->link;
        while (ptr2->link != NULL)
        {
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->link;
        }
        ptr1 = ptr1->link;
    }
}
