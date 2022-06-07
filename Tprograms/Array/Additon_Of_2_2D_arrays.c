// Addition of two 2d arrays

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[50][50],b[50][50],c[100][100];
    int i,j,m,n;

    printf("\nEnter the no.of rows of array :");
    scanf("%d",&m);

    printf("\nEnter the no.of columns of array:");
    scanf("%d",&n);

    printf("\nEnter  the elements into array A is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nThe array A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter  the elements into array B is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\nThe array B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nAfter adding array A and array B,the array C is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

getch();
return 0;
}