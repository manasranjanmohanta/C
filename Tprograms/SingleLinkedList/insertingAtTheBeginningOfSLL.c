/*inserting a node  at the beginning of a single linked list*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void insertAtBeginningOfASLL(struct node **, int );
int main()
{
    struct node *head =NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 79;
    current->link = NULL;
    head->link->link = current;

    int item=60;
    insertAtBeginningOfASLL(&head, item);

    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }

    getch();
    return 0;
}

void insertAtBeginningOfASLL(struct node **head, int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = item;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
}
