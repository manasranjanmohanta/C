//Creating complete single linked list

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

    struct node *current;
    current=(struct node*)malloc(sizeof(struct node));

    current->data=90;
    current->link=NULL;
    head->link=current;

    printf("%d",head->data);

    getch();
    return 0;
}

