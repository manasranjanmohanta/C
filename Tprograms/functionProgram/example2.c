/*program using function to find the largest among three integers*/

#include <stdio.h>
#include <conio.h>
int Largest(int x, int y, int z);

int main()
{
    int a, b, c;
    int largest;
    printf("\nEnter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    largest = Largest(a, b, c);
    printf("\nThe largest is:%d", largest);
    getch();
    return 0;
}
int Largest(int x, int y, int z)
{
    int largest;
    if (x > y && x > z)
    {

        largest = x;
        return largest;
    }
    else if (y > x && y > z)
    {
        largest = y;

        return largest;
    }
    else
    {
        largest = z;
        return largest;
    }
}
