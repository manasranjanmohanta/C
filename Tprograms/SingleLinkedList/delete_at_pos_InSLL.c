/*Delete node at any position  in a single  linked list */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void delete_at_pos(struct node **, int);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 78;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 67;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL;
    head->link->link->link = current;

    int pos;

    printf("\nEnter the positon of node you want  to delete:");
    scanf("%d", &pos);

    delete_at_pos(&head, pos);

    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }

    getch();
    return 0;
}
void delete_at_pos(struct node **head, int pos)
{
    struct node *current = *head;
    struct node *previous = *head;
    if (*head == NULL)
    {
        printf("Linked list is empty.");
    }
    else if (pos == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (pos != 1)
        {
            previous = current;
            current = current->link;
            pos--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}
