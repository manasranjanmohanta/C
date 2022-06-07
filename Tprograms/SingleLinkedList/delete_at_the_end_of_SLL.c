/*Deleting node  at the end of a single linked list using two pointer*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *delete_at_the_end(struct node *);

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 67;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 78;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 78;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 80;
    current->link = NULL;
    head->link->link->link = current;

    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }

    head = delete_at_the_end(head);

    ptr = head;
    printf("\nAfter deleting the last node of linkedlist:\n");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
    getch();
    return 0;
}

struct node *delete_at_the_end(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty.");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp, *temp2;
        temp = head;
        temp2 = head;
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
        return head;
    }
}