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
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=90;
    current->link=NULL;
    head->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=78;
    current->link=NULL;
    head->link->link=current;

    getch();
    return 0;
}
