/*Inserting a node into an empty Double Linked List Using function */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void add_into_empty_list(struct node *, int);
int main()
{
    struct node *head;
    add_into_empty_list(head, 45);
    printf("%d", head->data);

    getch();
    return 0;
}
void add_into_empty_list(struct node *head, int item)
{
    struct node *prev, *next;
    head->prev = NULL;
    head->data = item;
    head->next = NULL;
}




// /*Inserting a node into an empty Double Linked List Using function */

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct node
// {
//     struct node *prev;
//     int data;
//     struct node *next;
// };


// struct node *add_into_empty_list(struct node *, int );
// int main()
// {
//     struct node *head;
//     head = add_into_empty_list(head, 45);
//     printf("%d", head->data);

//     getch();
//     return 0;
// }
// struct node *add_into_empty_list(struct node *head, int item)
// {
//     struct node *prev, *next;
//     head->prev = NULL;
//     head->data = item;
//     head->next = NULL;

//     return head;
// }