//inserting at the end of  a single linkedlist
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



struct node
{
   int data;
    struct node *link;
};

int main()
{

    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current ->data=90;
    current->link=NULL;
    head->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    current ->data=3;
    current->link=NULL;
    head->link->link=current;

    printASLL(head);
    AfterInsertingASLL(head);


    getch();
    return 0;
}
void printASLL(struct node *head)
{
    int item;
    if(head==NULL)
        printf("Linked List is empty.");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("\nEnter a data you want to insert at the end:");
    scanf("%d",&item);
    insertANodeInSLL(head,item);

}
void insertANodeInSLL(struct node *head,int item)
{
    struct node *ptr,*temp;
    if(head==NULL)
        printf("Linked List is Empty.");
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->link=NULL;

    while(ptr->link!=NULL)
    {

       ptr=ptr->link;
    }
    ptr->link=temp;
}
void AfterInsertingASLL(struct node *head)
{
    if(head==NULL)
        printf("Linked List is empty.");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}






