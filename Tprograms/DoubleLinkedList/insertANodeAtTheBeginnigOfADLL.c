/*Inserting a node in the beginnnig of a double linked list */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node *add_Into_empty_DLL(struct node *, int );
struct node *insertAtTheBeginninOfDLL(struct node *, int );
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    head = add_Into_empty_DLL(head, 281);
    head = insertAtTheBeginninOfDLL(head, 69);

    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    getch();
    return 0;
}
struct node *add_Into_empty_DLL(struct node *head, int item)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = item;
    temp->next = NULL;

    head = temp;

    return head;
}

struct node *insertAtTheBeginninOfDLL(struct node *head, int item)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = item;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;

    return head;
}
