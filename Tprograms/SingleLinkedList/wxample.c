#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node sNode;
void insertAtEndInSLL(sNode *start, int item)
{
    sNode *newNode, *ptr;
    ptr = start;
    if (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    newNode = (sNode *)malloc(sizeof(sNode));
    if (newNode == NULL)
    {
        printf("\nOut of memory");
        return;
    }
    else
    {
        newNode->info = item;
        newNode->next = NULL;
        ptr->next = newNode;
        printf("\nA new node of value %d is added\n", newNode->info);
    }
}
sNode *createSLL()
{
    sNode *start;
    int item;
    char ch;
    start = (sNode *)malloc(sizeof(sNode));
    if (start == NULL)
    {
        printf("Out of Memory....");
        return;
    }
    printf("Enter the value of 1st(info field) node : ");
    scanf("%d", &start->info);
    start->next = NULL;
    printf("\n1st node of value %d is created", start->info);
    printf("\n\nDo you want to add more nodes(press Y to continue or any other key to quit)\n");
    ch = getche();
    printf("\n");
    while (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter the value(info field) of new node :");
        scanf("%d", &item);
        insertAtEndInSLL(start, item);
        printf("\nDo you want to add more nodes (press 'Y' to continue, any other key to quit)?: ");
        ch = getche();
    }
    return start;
}
void traverseSSL(sNode *start)
{
    sNode *ptr = malloc(sizeof(sNode));
    if (start == NULL)
    {
        printf("\nThe list is empty\n");
    }
    else
    {
        ptr = start;
        printf("\nThe single linked list is :\n");
        while (ptr!= NULL)
        {
            printf("%d->", ptr->info);
            ptr = ptr->next;
        }

        printf("\n\n");
    }
}
void main()
{
    sNode *start;
    start = createSLL();
    traverseSSL(start);
    getch();
}
