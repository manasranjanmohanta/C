/* program to find out the length of a string without using the strlen() function.
 */

#include <stdio.h>
#include <conio.h>

int main()
{
  char string[50];
  int i,count=0;
  printf("\nEnter a string:");
  gets(string);
  for (i = 0; string[i] != '\0';i++)
  {
    count++;
  }
  printf("\nThe length of the string is :%d", count);
  getch();
  return 0;
}