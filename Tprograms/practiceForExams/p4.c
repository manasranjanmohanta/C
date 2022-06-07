/*Program using function to calculate the sum and difference of two integers*/
#include <stdio.h>
#include <conio.h>

void sumAndDifferene(int integer1, int integer2, int *sum, int *difference)
{
    *sum = integer1 + integer2;
    *difference = integer1 - integer2;
}

int main()
{
    int integer1, integer2, sum, difference;
    printf("\nEnter two integers:");
    scanf("%d%d", &integer1, &integer2);
    sumAndDifferene(integer1, integer2, &sum, &difference);
    printf("\nThe sum is :%d and the diffrence is: %d", sum, difference);

    getch();
    return 0;
}