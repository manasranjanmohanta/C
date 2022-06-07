/*program to find out the length of a string without using the strlen() function.
 */

#include <stdio.h>
#include <conio.h>

int main()
{
  char string[50];
  int i;
  printf("\nEnter a string:");
  gets(string);
  for (i = 0; string[i] != '\0';)
  {
    i++;
  }
  printf("\nThe length of the string is :%d", i);
  getch();
  return 0;
}