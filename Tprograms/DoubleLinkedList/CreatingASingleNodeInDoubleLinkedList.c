// Creating a node in  double linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 67;
    head->next = NULL;

    printf("%d", head->data);

    getch();
    return 0;
}