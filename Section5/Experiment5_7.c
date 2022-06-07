/*a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461)*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, num1, rev = 0, rem;

    printf("\nEnter any number:");
    scanf("%d", &num);

    num1 = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (num1 == rev)
    {
        printf("%d is palindrome.", num1);
    }
    else
    {
        printf("%d is not a palindrome.", num1);
    }
    getch();
    return 0;
}
