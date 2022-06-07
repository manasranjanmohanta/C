/*a program to create a structure COMPLEX to represent a complex number. Using
the structure write a program to add two complex numbers and display their sum.*/

#include <stdio.h>
#include <conio.h>

struct COMPLEX
{
    double real;
    double imag;
};

int main()
{
    struct COMPLEX c[2];

    double sum1, sum2;

    printf("\nEnter the real and imaginary part of complex number1:");
    scanf("%lf%lf", &c[0].real, &c[0].imag);
    printf("\nEnter the real and imaginary part of complex number2:");
    scanf("%lf%lf", &c[1].real, &c[1].imag);

    printf("\nThe first complex number is:");
    printf("%.1lf+%.1lfi", c[0].real, c[0].imag);
    printf("\nThe second complex number is:");
    printf("%.1lf+%.1lfi", c[1].real, c[1].imag);

    sum1 = c[0].real + c[1].real;
    sum2 = c[0].imag + c[1].imag;

    printf("\nThe sum of two complex number is:%.1lf+%.1lfi", sum1, sum2);

    getch();
    return 0;
}
