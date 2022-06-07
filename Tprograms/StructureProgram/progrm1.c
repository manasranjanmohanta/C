/*/*Define a structure “Student” having regd. no., name, and CGPA as attributes. Write a
program to read the information for one student from the keyboard and print the same on the screen. */

#include<stdio.h>
#include<conio.h>

struct student
{
    int regdno;
    char name[30];
    float CGPA;

};
int main()
{
   struct student s;
   printf("\nEnter student regd.no,name and CGPA:");
   scanf("%d%s%f",&s.regdno,s.name,&s.CGPA);

   printf("\nThe student details are:\nregdno\t\tname\t\tCGPA");
   printf("\n------------------------------------------");
   printf("\n%d\t\t%s\t\t%.2f\t\t",s.regdno,s.name,s.CGPA);

    getch();
    return 0;
}
