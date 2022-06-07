/*Program that takes the radius of a circle and displays its area and perimeter*/
#include <stdio.h>
#include <conio.h>
int main()
{
    float PI = 3.141;
    int radius, area, perimeter; // declaration of variable
    printf("\nEnter the radius of the circle:");
    scanf("%d", &radius);
    area = PI * radius * radius; // formula to calculate area
    perimeter = 2 * PI * radius; // formula to calculate perimeter
    printf("\nThe area of the circle is:%d", area);
    printf("\nThe perimeter of the circle is:%d", perimeter);

    getch();
    return 0;
}
