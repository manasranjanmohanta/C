/* program to compute the area of a triangle given its base and height*/

#include <stdio.h>
#include <conio.h>

int main()
{
    /* variable declaration*/
    int base, height;
    float area;

    printf("\nEnter the base of a triangle:");
    scanf("%d", &base);
    printf("\nEnter the height of a triangle:");
    scanf("%d", &height);

    /*  The formula to calculate Area of a Triangle is =(1/2*base*height) */
    area = 0.5 * base * height;

    printf("\nThe area of the triangle is:%.2f", area);

    getch();
    return 0;
}
