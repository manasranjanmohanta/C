// Program to print the sum of individual rows and column 

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3];
    int i,j;
    int sumOfRows;
    int sumOfColumns;

    printf("\nEnter the elements into array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe array is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        sumOfRows=0;
        sumOfColumns=0;
        for(j=0;j<3;j++){
            sumOfRows=sumOfRows+a[i][j];
            sumOfColumns=sumOfColumns+a[j][i];
        }
        if(j==3)
        j=i;
        printf("\nSum of  %d th Rows:%d",i,sumOfRows);
        printf("\nSum of %d th Columns:%d",j,sumOfColumns);

    }

getch();
return 0;
}





















