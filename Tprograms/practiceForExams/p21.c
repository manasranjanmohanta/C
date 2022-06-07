#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    char string[30]="prangya loves manas";
    fp = fopen("test.txt", "w");
    fprintf(fp, "%s", string);
    //printf("\nThe value is :%s", string);
    
    return 0;
}