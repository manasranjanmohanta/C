// creating alinked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void insertAtEndInSLL(struct node *head, int item);
struct node *createSLL()
{
    struct node *head;
    int item;
    char ch;
    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("\nOut of memory of space.");
    }
    else
    {
        printf("\nEnter the value of the 1st node:");
        scanf("%d", &item);
        head->data = item;
        head->link = NULL;
        printf("\nDo you want to add more nodes into then enter 'Y' or 'y' or any other key to exit?");
        ch = getche();
        while (ch == 'Y' || ch == 'y')
        {
            printf("\nEnter the value of the new node:");
            scanf("%d", &item);
            insertAtEndInSLL(head, item);
            printf("\nDo you want to add more nodes into then enter 'Y' or 'y' or any other key to exit?");
            ch = getche();
        }
    }
    return head;
}
void insertAtEndInSLL(struct node *head, int item)
{
    struct node *ptr, *current;
    ptr = head;
    while (ptr->link = NULL)
    {
        ptr = ptr->link;
    }
    current = (struct node *)malloc(sizeof(struct node));
    if (current == NULL)
    {
        printf("Out of memory space.");
    }
    else
    {
        current->data = item;
        current->link = NULL;
        ptr->link = current;
        printf("\nA new node is created with value %d", current->data);
    }
}
int main()
{
    struct node *head;
    head = createSLL();
    //traverseSLL(head);
    getch();
    return 0;
}
