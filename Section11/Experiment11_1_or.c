/*A student is represented by the following attributes:
− Roll number (int)
− Name (string)
− Mark in subject 1 (float)
− Mark in subject 2 (float)
− Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each
student and average mark of all students */

#include <stdio.h>
#include <conio.h>

struct student
{
    int rollNo;
    char name[30];
    float markInSubject1;
    float markInSubject2;
    float markInSubject3;
};
int main()
{
    struct student s[50];
    float avg, total;
    int sum;
    int i, j;

    printf("\nEnter the student details:");
    for (i = 0; i < 50; i++)
    {
        printf("\nStudent%d", i + 1);
        printf("\n==================");
        printf("\nroll no:");
        scanf("%d", &s[i].rollNo);
        printf("\nname:");
        scanf("%s", s[i].name);
        printf("\nmark in subject1:");
        scanf("%f", &s[i].markInSubject1);
        printf("\nmark in subject2:");
        scanf("%f", &s[i].markInSubject2);
        printf("\nmark in subject3:");
        scanf("%f", &s[i].markInSubject3);
    }

    printf("\nThe student details are:");
    for (i = 0; i < 50; i++)
    {
        sum = 0, avg = 0;

        sum = sum + s[i].markInSubject1 + s[i].markInSubject2 + s[i].markInSubject3;

        printf("\nStudent%d", i + 1);
        printf("\n==================");
        printf("\nroll no:");
        printf("%d", s[i].rollNo);
        printf("\nname:");
        printf("%s", s[i].name);

        printf("\nThe total marks is:%d", sum);
        total = total + sum;
    }
    avg = total / 50;
    printf("\nThe average marks  for all students is:%.2f", avg);
    getch();
    return 0;
}