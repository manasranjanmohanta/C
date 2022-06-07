/*An array of students*/

#include<stdio.h>
#include<conio.h>

struct student
{
    int regdno;
    char name[30];
    float cgpa;
};

int main()
{   int i;
    int n;
    struct student s[50];
    printf("\nEnter how many student details you want to store:");
    scanf("%d",&n);

    for( i=0;i<n;i++)
    {
        printf("\n\nstudent%d\n-------------------",i+1);
        printf("\nregdno:");
        scanf("%d",&s[i].regdno);
        printf("\nname:");
        scanf("%s",s[i].name);
        printf("\ncgpa:");
        scanf("%f",&s[i].cgpa);

    }
    printf("\n---------------------");
    printf("\n---------------------");
    printf("\n\nStudent details are:");
    for(i=0;i<n;i++){
        printf("\nStudent%d:\n------------------",i+1);
        printf("\nregdno:%d\nname:%s\ncgpa:%.2f\n\n",s[i].regdno,s[i].name,s[i].cgpa);
    }
    getch();
    return 0;
}
