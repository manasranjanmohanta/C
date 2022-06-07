/*: Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 33 + 73 + 13 = 371) */

#include <stdio.h>
#include <conio.h>
int main()
{
     int num, r, sum = 0, temp;

     printf("\nEnter a number: ");
     scanf("%d", &num);
     temp = num;
     while (num != 0)
     {
          r = num % 10;
          sum = sum + (r * r * r);
          num = num / 10;
     }
     if (sum == temp)
          printf("%d is an Armstrong number.\n", temp);
     else
          printf("%d is not an Armstrong number.\n", temp);
}
