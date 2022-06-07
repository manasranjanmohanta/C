// Creating and traversing a single linkedlist

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 69;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 78;
    current->link = NULL;
    head->link->link = current;

    count_of_nodes(head);
    traverseASLL(head);
    getch();
    return 0;
}

void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)

        printf("Linked list is empty.");

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("There are %d nodes\n", count);
}


void traverseASLL(struct node* head)
{
    if(head==NULL)
    {
        printf("Linked List is empty.");
    }
    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
