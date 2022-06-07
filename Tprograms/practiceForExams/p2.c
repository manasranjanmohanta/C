//swap  two numbers
#include<stdio.h>
#include<conio.h>


void swap(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}
int main()
{
  int num1,num2;
  printf("\nEnter the two numbers:");
  scanf("%d%d",&num1,&num2);
  swap(num1,num2);
  printf("\nAfter swapping the two numbers are:%d and %d",num2,num1);

getch();
return 0;
}