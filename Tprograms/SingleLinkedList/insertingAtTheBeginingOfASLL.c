//inserting at the beginning of linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node* insertAtBeginningOfASLL(struct node*,int );
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=67;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof (struct node));
    current->data=78;
    current->link=NULL;
    head->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=79;
    current->link=NULL;
    head->link->link=current;

    int item=89;

    head=insertAtBeginningOfASLL(head,item);
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;

    }
    getch();
    return 0;

}
struct node* insertAtBeginningOfASLL(struct node *head,int item)
{

    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;
    return head;
}

