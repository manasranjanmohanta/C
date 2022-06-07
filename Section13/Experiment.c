#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
  int *ptr,size;
  int i;

  printf("Enter the size of the array:");
  scanf("%d",&size);

  ptr=(int*)malloc(size*sizeof(int));

  printf("\nEnter the elements:");
  for(i=0;i<size;i++){
      scanf("%d",ptr+i);
  }

  printf("\nThe elements are:");
  for(i=0;i<size;i++){
      printf("%d",ptr[i]);
  }
getch();
return 0;
}
