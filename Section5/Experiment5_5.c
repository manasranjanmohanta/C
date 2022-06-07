/* Program to find the number of and sum of all integer greater than 100 and less than 200 that are divisible by 7 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, count = 0, sum = 0;
    for (i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            count++;
            sum = sum + i;
        }
    }
    printf("\nThe total numbers between 100 and 200 which are divisible by 7 are:%d", count);
    printf("\nThe sum is:%d", sum);

    getch();
    return 0;
}
