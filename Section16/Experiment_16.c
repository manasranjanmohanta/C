/*Write a menu-based program to implement the following operations on a double linked
list based on user�s choice.
1. Create a double linked list.
2. Traverse a double linked list.
3. Insert a node at the beginning.
4. Insert a node at the end
5. Insert a node at an intermediate position after a given node.
6. Delete the first node.
7. Delete the last node.
8. Delete an intermediate node after a given node. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// self referential structure
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

// createDLL function to create a double linkedlist
//--------------------------------------------------------------------------------------------------------------------
struct node *createDLL()
{
    struct node *head;
    int item;
    char ch;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("\nOut of memory space.");
        return;
    }
    printf("\nEnter the data field into the 1st node:");
    scanf("%d", &item);

    head->prev = NULL;
    head->data = item;
    head->next = NULL;

    printf("\nThe first node of the linked list %d is created.", head->data);

    printf("\nDo you want to add more nodes into linked list,then enter 'Y' or 'y'or any other key to exit?:");
    ch = getche();

    while (ch == 'y' || ch == 'Y')
    {
        printf("\n\nEnter the data field into the  new node:");
        scanf("%d", &item);
        insertAtEndInDLL(head, item);

        printf("\nDo you want to add more nodes into linked list,then enter 'Y' or 'y'or any other key to exit?:");
        ch = getche();
    }
    return head;
}
// insertAtEndInDLL function to insert node into double linked list
//-------------------------------------------------------------------------------------------------------------------
void insertAtEndInDLL(struct node *head, int item)
{
    struct node *ptr, *newNode;
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("\nLiked list is empty.");
        return;
    }

    newNode->prev = ptr;
    newNode->data = item;
    newNode->next = NULL;
    ptr->next = newNode;

    printf("\nA new node with data field %d added to the linked list.", newNode->data);
}

// traverseDLL function to traverse and print the Double linked list
//--------------------------------------------------------------------------------------------------------------
void traverseDLL(struct node *head)
{
    if (head == NULL)
    {
        printf("\nLinked list is empty.");
    }
    else
    {
        struct node *ptr;
        ptr = head;
        printf("\n\n=================================\n");
        printf("\nThe Double linked list is:");
        while (ptr != NULL)
        {
            printf("%d<->", ptr->data);
            ptr = ptr->next;
        }
        printf("\b\b\b\b");
        printf("\n\n");
    }
}

// insertAtBegInDLL function to insert  node at the beginnnig  of Double linke list
//--------------------------------------------------------------------------------------------------------
struct node *insertAtBegInDLL(struct node *head)
{
    struct node *temp;
    int item;
    if (head == NULL)
    {
        printf("\nLinked list is empty.");
        return;
    }

    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of memory space.");
    }
    else
    {
        printf("\nEnter the new node you want to insert:");
        scanf("%d", &item);

        temp->prev = NULL;
        temp->data = item;
        temp->next = head;

        head = temp;
    }
    return head;
}

// insertAtPosInDLL function to insert node at certain position given by the user in a double linked list
//-----------------------------------------------------------------------------------------------------------
struct node *insertAtPosInDLL(struct node *head)
{
    struct node *ptr1, *ptr2, *temp;
    ptr2 = head;
    int pos, item;
    if (head == NULL)
    {
        printf("\nLinked list is empty.");
        return;
    }
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the positon where you want to insert:");
    scanf("%d", &pos);
    printf("\nEnter the data you want to insert:");
    scanf("%d", &item);
    if (pos == 1)
    {
        temp->prev = NULL;
        temp->data = item;
        temp->next = head;

        head = temp;
    }
    else

    {

        while (pos != 1)
        {
            ptr1 = ptr2;
            ptr2 = ptr2->next;
            pos--;
        }
        temp->data = item;
        temp->next = ptr2;
        temp->prev = ptr1;
        ptr2->prev = temp;
        ptr1->next = temp;
    }
    return head;
}

// delete_at_first function to delete the first node
//-----------------------------------------------------------------------------------------------------
struct node *delete_at_firstInDLL(struct node *head)
{
    if (head == NULL)
    {
        printf("\bLinked list is empty.");
        return;
    }
    else if (head->prev == NULL && head->next == NULL)
    {
        free(head);
        head == NULL;
    }

    return head;
}

struct node *delete_at_lastInDLL(struct node *head)
{
    if (head == NULL)
    {
        printf("\nLinked list is empty.");
        return;
    }
    else if (head->prev == NULL && head->next == NULL)
    {
        free(head);
        head == NULL;
    }
    else
    {
        struct node *ptr1, *ptr2;
        ptr2 = head;
        while (ptr2->next != NULL)

        {
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
        ptr1->next = NULL;
        free(ptr2);
        ptr2 = NULL;
    }
    return head;
}

// delete_at_posInDLL to delete a node at a given position
//--------------------------------------------------------------------------------

struct node *delete_at_posInDLL(struct node *head)
{
    struct node *ptr1, *ptr2, *ptr3;
    int pos;
    if (head == NULL)
    {
        printf("\nLinked list is empty.");
        return 0;
    }
    printf("\nEnter the position which data you want to delete:");
    scanf("%d", &pos);
    if (pos == 1)
    {
        free(head);
        head = NULL;
    }
    else
    {
        ptr3 = head->next;
        ptr2 = head;
        while (pos != 1)
        {
            ptr1 = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
            pos--;
        }
        ptr1->next = ptr3;
        ptr3->prev == ptr1;

        free(ptr2);
        ptr2 = NULL;
    }
    return head;
}
int main()
{
    struct node *head;
    int ch;
    while(1)
    {
    printf("\n1. Create a double linked list.");
    printf("\n2. Traverse a double linked list.");
    printf("\n3. Insert a node at the beginning.");
    printf("\n4. Insert a node at the end.");
    printf("\n5. Insert a node at an intermediate position after a given node.");
    printf("\n6. Delete the first node.");
    printf("\n7. Delete the last node.");
    printf("\n8. Delete an intermediate node after a given node.\n\n");

        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = createDLL();
        case 2:

            traverseDLL(head);
            break;
        case 3:
            head = createDLL();
            head = insertAtBegInDLL(head);
            printf("\nAfter inserting at the beginning of linked list:");
            traverseDLL(head);
            break;
        case 4:
            head = createDLL();
            printf("\nAfter inserting at the end of linked list:");
            traverseDLL(head);
            break;
        case 5:
            head = createDLL();
            head = insertAtPosInDLL(head);
            printf("\nAfter inserting at certain position of linked list:");
            traverseDLL(head);
            break;
        case 6:
            head = createDLL();
            head = delete_at_firstInDLL(head);
            printf("\nAfter deleting the first node:");
            traverseDLL(head);
            break;
        case 7:
            head = createDLL();
            head = delete_at_lastInDLL(head);
            printf("\nAfter deleting the last node:");
            traverseDLL(head);
            break;
        case 8:
            head = createDLL();
            head = delete_at_posInDLL(head);
            printf("\nAfter deleting node at certain position.");
            traverseDLL(head);
            break;
        default:
            printf("You entered something wrong.");
        }
    }

    getch();
    return 0;
}
