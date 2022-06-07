/* calculate average of three  numbers using function
 */
#include <stdio.h>
#include <conio.h>

float average(int x, int y, int z)
{
    float avg;
    avg = (float)(x + y + z) / 3;
    return avg;
}

float average(int x, int y, int z);

int main()
{
    int a, b, c;
    float avg;
    printf("\nEnter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    avg = average(a, b, c);
    printf("\nThe average of three numbers is:%f", avg);
    getch();
    return 0;
}