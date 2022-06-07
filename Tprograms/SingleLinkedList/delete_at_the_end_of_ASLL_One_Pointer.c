/* Deleting a  node at the end of a single linked list using one pointer*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void delete_at_the_end(struct node *);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 67;
    head->link = NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data = 77;
    current->link = NULL;
    head->link = current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data = 80;
    current->link = NULL;
    head->link->link = current;

    current=(struct node*)malloc(sizeof(struct node)); 
    current->data = 69;
    current->link = NULL;
    head->link->link->link = current;

    struct node *ptr = head;

    printf("\nThe single linked list is:");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }

    delete_at_the_end(head);

    ptr = head;
    printf("\nAfter deleting node the single linked list is:");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
    getch();
    return 0;
}

void delete_at_the_end(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty.");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp;
        temp = head;
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }

        free(temp->link);
        temp->link = NULL;
    }
}