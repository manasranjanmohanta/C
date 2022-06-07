/*Example of arrays within structures(Take regd no and name and the cgpa in semester then display the regdno,name and average of therir cgpa)*/

#include<stdio.h>
#include<conio.h>

struct student
{
    int regdNo;
    char name[30];
    float cgpa[60];
};
int main()
{
    struct student s[50];
    int n,i,j,sum,sem=3;
    float avg;
    printf("\nEnter how many student detail you want to store:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nStudent%d",i+1);
        printf("\n----------------------------");
        printf("\nRegd no:");
        scanf("%d",&s[i].regdNo);
        printf("\nName:");
        scanf("%s",s[i].name);

        for(j=0;j<sem;j++){
            printf("\nEnter cgpa in  semester%d:",j+1);
            scanf("%f",&s[i].cgpa[j]);
        }
    }
    printf("\nThe student details are:");
    for(i=0;i<n;i++)
    {
        sum=0,avg=0;
        printf("\nStudent%d",i+1);
        printf("\nRegd no:");
        printf("%d",s[i].regdNo);
        printf("\nName:");
        printf("\%s",s[i].name);
        for(j=0;j<sem;j++)
    {
        sum=sum+s[i].cgpa[j];
    }
    avg=sum/sem;
    printf("\nThe average of cgpa is :");
    printf("%.2f",avg);
    }

    getch();
    return 0;
}
