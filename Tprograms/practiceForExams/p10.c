// Arary if structures
#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[49];
    float cgpa;
};

int main()
{
    struct student s[5];
    int i;

    printf("\nEnter the student details:");
    for (i = 0; i < 5; i++)
    {   
        printf("\nStudent%d", i + 1);
        printf("\nrollno:");
        scanf("%d", &s[i].rollno);
        printf("\nname:");
        scanf("%s", s[i].name);
        printf("\ncgpa:");
        scanf("%f", &s[i].cgpa);
        printf("\n----------------------------");
    }
    printf("\nThe student details are:");
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent%d", i + 1);
        printf("\nrollno:%d", s[i].rollno);
        printf("\nname:%s", s[i].name);
        printf("\ncgpa:%f", s[i].cgpa);
        printf("\n----------------------------");
    }

    getch();
    return 0;
}