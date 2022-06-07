/*An item is represented by the following attributes:
− Either a model number (string) or an item code (string)
− Name (string)
− Price (float)
Write a program using union to read the information for 5 items from the keyboard and print the same on
the screen */

#include <stdio.h>
#include <conio.h>
union id
{
    int modelNumber;
    int itemCode;
};
struct item
{
    union id u;
    char name[30];
    float price;
};
int main()
{

    struct item s[5];
    char ch;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the details of item :");
        printf("\nDetail of item %d", i + 1);
        printf("\n=========================");

        printf("\nPress 1 to enter model number and any othe key to enter item code:");
        ch = getche();

        if (ch == '1')
        {
            printf("\nEnter model number of item:");
            scanf("%d", &s[i].u.modelNumber);
        }
        else
        {
            printf("\nEnter item code of item:");
            scanf("%d", &s[i].u.itemCode);
        }
        printf("\nWhat is the name of the item ?");
        getchar();
        gets(s[i].name);
        printf("\nEnter the  price of the item:");
        scanf("%f", &s[i].price);

        printf("\nThe details of the item are:");
        printf("\nDetails of item %d", i + 1);
        printf("\n=========================");
        if (ch == '1')
        {
            printf("\nThe model number of item is :");
            printf("%d", s[i].u.modelNumber);
        }
        else
        {
            printf("\nThe item code of item is :");
            printf("%d", s[i].u.itemCode);
        }
        printf("\nThe name of the item is:");
        puts(s[i].name);
        printf("\nThe  price of the item is :");
        printf("%.2f", s[i].price);
    }
    getch();
    return 0;
}
