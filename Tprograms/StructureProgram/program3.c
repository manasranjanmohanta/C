/*Copying and Comparing Structures of a details of a person*/

#include<stdio.h>
#include<conio.h>

struct person
{
    int id;
    char name[30];
    int age;
};
int main()
{
    struct person p1,p2;
    printf("\nEnter the id and name and age of a person:\n");
    scanf("%d%s%d",&p1.id,p1.name,&p1.age);
    p2=p1; //copying
    if(p1.id==p2.id) //comparing
    {
        printf("\np1 and p2 is same.");
        printf("\n\nid:%d\nname:%s\nage:%d",p2.id,p2.name,p2.age);
    }

    getch();
    return 0;

}
