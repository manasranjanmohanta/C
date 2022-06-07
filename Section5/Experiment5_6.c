/* program to find out the HCF and LCM of two numbers */

#include <stdio.h>
#include <conio.h>

int main()
{
  int a, b, num1, num2, temp, lcm, hcf;

  printf("\nEnter the two numbers:");
  scanf("%d%d", &a, &b);

  num1 = a;
  num2 = b;

  while (num2 != 0)
  {
    temp = num2;
    num2 = num1 % num2;
    num1 = temp;
  }
  hcf = num1;
  lcm = (a * b) / hcf;

  printf("\nHCF of %d and %d is %d", a, b, hcf);
  printf("\nLCM of %d and %d is %d", a, b, lcm);

  getch();
  return 0;
}
