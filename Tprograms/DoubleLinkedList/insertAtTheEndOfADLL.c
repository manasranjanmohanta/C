/*Insert  at the end of a Double Linked list */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *add_Into_empty_DLL(struct node *, int );
struct node *insertAtTheBeginningOfDLL(struct node *, int );
struct node *insertAtTheEndOfDLL(struct node *,int );

int main()
{
    struct node *head = NULL;
    head = add_Into_empty_DLL(head, 281);
    head = insertAtTheBeginningOfDLL(head, 69);
    head=insertAtTheEndOfDLL(head,62);

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

struct node *insertAtTheBeginningOfDLL(struct node *head, int item)
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
struct node *insertAtTheEndOfDLL(struct node *head,int item)
{
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=item;
    temp->next=NULL;

    ptr->next=temp;
    temp->prev=ptr;
    return head;

}
