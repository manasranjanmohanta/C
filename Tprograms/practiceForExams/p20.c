# include <stdio.h>
# include <conio.h>
void main()
{
int n, i, fib1=0, fib2=1, fib;
printf("\n\nEnter the value of n: ");
scanf("%d", &n);
printf("\nthe fibonacci series is%d %d",fib1,fib2);
for(i=1; i<=n; i++)
{
fib = fib1+fib2;
fib1 = fib2;
fib2 = fib;
printf(" %d",fib);
}

getch();
}