/* program to compute the area of a triangle given its three sides */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    /*variable declaration*/
    int a, b, c;
    float s, area;

    printf("\nEnter the first side of a triangle: ");
    scanf("%d", &a);
    printf("\nEnter the second side of a triangle: ");
    scanf("%d", &b);
    printf("\nEnter the third side of a triangle: ");
    scanf("%d", &c);

    /* formula to calculate the area of a triangle when
    three sides are given is =sqrt(s*(s-a)*(s-b)*(s-c)) */
    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nThe area of the triangle is:%.2f", area);

    getch();
    return 0;
}
