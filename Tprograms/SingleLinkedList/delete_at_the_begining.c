/*Delete nodes at th begining of a single linked list*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *delete_at_the_beginning(struct node *);

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 78;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 89;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;

    head = delete_at_the_beginning(head);

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
    getch();
    return 0;
}
struct node *delete_at_the_beginning(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty.");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}