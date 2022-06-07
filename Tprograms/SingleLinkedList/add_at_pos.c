/*Add data at any position*/

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_at_pos(struct node*, int , int );
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 90;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 95;
    current->link = NULL;
    head->link=current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 100;
    current->link = NULL;
    head->link->link=current;

    struct node *ptr;
     while (ptr != NULL)
    {

        printf("%d", ptr->data);
        ptr = ptr->link;
    }

    int item = 105;
    int pos = 3;

    add_at_pos(head, item, pos);

    ptr = head;

    while (ptr != NULL)
    {

        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    getch();
    return 0;
}

void add_at_pos(struct node* head, int item, int pos)
{
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = item;
    ptr2->link = NULL;

    struct node *ptr;
    ptr = head;

    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;

}
