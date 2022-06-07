/*Structure within structure*/

#include <stdio.h>
#include <conio.h>>

struct date
{
    int day;
    char month[30];
    int year;
};
struct employee
{
    char name[30];
    struct date joiningDate;
    float salary;
};
int main()
{
    struct Employee e;
    printf("\nEnter employee information\n");
    printf("============================\n\n");
    printf("Date of joining (dd mm yyyy):");
    scanf("%d%s%d",&e.joining.date,&e.joining.month,&e.joining.year);

    printf("Salary:");
    scanf("%f",&e.salary);

    printf("\n\nEmployee details\n--------------");
    printf("\nname:%s\ndate" %d %s %d\n salary: %.2f"),e.name,e.joiningFate


}