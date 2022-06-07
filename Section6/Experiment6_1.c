/*Write a program to input �n� numbers and sort them in descending order.*/

#include <stdio.h>
#include <conio.h>

int main()
{
  int num;
  int arr[100];
  int i, j, temp;

  printf("\nEnter the numbers of element:");
  scanf("%d", &num);

  for (i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < num; i++)
  {
    for (j = i + 1; j < num; j++)
    {
      if (arr[i] < arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("\nThe elements in descending order:");
  for (i = 0; i < num; i++)
  {
    printf("%d ", arr[i]);
  }
  getch();
  return 0;
}
