/* A program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.However, rename the data types
�float� to �Decimal� and �int� to �integer� by using typedef statement. */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    typedef float decimal; /* declares decimal as a new type,
                           equivalent to float.After this declaration
                           float can be used instead of decimal */
    decimal principal, rateOfInterest;
    typedef int integer; /* declares integer as a new type,
                           equivalent to int.After this declaration
                           integer can be used instead of int */
    integer time;
    decimal simpleInterest, compoundInterest;

    printf("\nEnter the principal amount:");
    scanf("%f", &principal);
    printf("\nEnter the rate of interest:");
    scanf("%f", &rateOfInterest);
    printf("\nEnter the time in year:");
    scanf("%d", &time);

    /* Calculating simple interest */
    simpleInterest = (principal * rateOfInterest * time) / 100;

    /* Calculating compound interest*/
    compoundInterest = principal * (pow(1 + rateOfInterest / 100, time) - 1);

    printf("\nSimple interest is %.2f", simpleInterest);
    printf("\nCompound interest is %.2f", compoundInterest);

    getch();
    return 0;
}
