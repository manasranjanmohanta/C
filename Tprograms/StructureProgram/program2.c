/*initializing structure variable*/
#include<stdio.h>
#include<conio.h>

struct student
{
    int regdno;
    char name[50];
    float cgpa;

};
int main()
{
    struct student s={27,"manas",95.69};
    printf("\nThe student details are:");
    printf("\n--------------------------");
    printf("\nregdno: student: cgpa:");
    printf("\n%d\t%s\t %.2f",s.regdno,s.name,s.cgpa);
    getch();
    return 0;
}
