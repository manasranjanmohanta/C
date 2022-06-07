// sum of a 2D array 

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[2][3];
    int i,j,sum=0;
    printf("\nEnter the elements into array:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe array is :\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum is %d",sum);
    

getch();
return 0;
}