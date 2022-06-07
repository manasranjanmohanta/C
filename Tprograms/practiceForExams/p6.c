// A program to print 1 to 10 without using any loop structures

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int i = 0;
int main()
{
    printf("%d\t", ++i);
    if (i == 10)
        exit(0);
    main();

    getch();
    return 0;
}