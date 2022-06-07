/* program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.] */

#include <stdio.h>
#include <conio.h>

int main()
{
   /* variable declaration */
   char ch;

   printf("\nEnter a character:");
   scanf("%c", &ch);

   /*if(ch>=65 && ch<=90)
        print it is in upper case letter.
     else if (ch>=97 && ch<122)
        print it is in lower case letter.
     else
        print it is not an alphabet.
   */
   (ch >= 65 && ch <= 90) ? printf("\nIt is in Upper case letter.") : (ch >= 97 && ch <= 122) ? printf("\nIt is in Lower case letter")
                                                                                              : printf("\nIt is not an alphabet.");

   getch();
   return 0;
}
