/* PR10_1.c: Define a structure “Student” having regd. no., name, and CGPA as attributes. Write a
program to read the information for one student from the keyboard and print the same on the screen. */

#include <stdio.h>
#include <conio.h>

struct student
{
    int regdNo;
    char name[30];
    float cgpa;
};
int main()
{
    struct student s;
    printf("\nEnter the student regd. no:");
    scanf("%d", &s.regdNo);
    printf("\nEnter the student name:");
    scanf("%s", s.name);
    printf("\nEnter the student  Cgpa:");
    scanf("%f", &s.cgpa);

    printf("\nThe student details are:");
    printf("\n=================================");
    printf("\nregdno:%d", s.regdNo);
    printf("\nname:");
    printf("%s", s.name);
    printf("\ncgpa:%.3f", s.cgpa);

    getch();
    return 0;
}