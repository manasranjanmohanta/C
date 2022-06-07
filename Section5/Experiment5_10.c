/*: Write a program that takes an integer �n� as input and prints the Fibonacci series up to
�n�. (Hint: Fibonacci series: 1 1 2 3 5 8 13 21 �) */

#include<stdio.h>
#include<conio.h>\

int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
printf("\nEnter the nth value: ");
scanf("%d", &n);
printf("\nFibonacci series: ");
while(sum <= n)
{
printf("%d ", sum);
a = b; // swap elements
b = sum;
sum = a + b; // next term is the sum of the last two terms
}
getch();
return 0;
}


