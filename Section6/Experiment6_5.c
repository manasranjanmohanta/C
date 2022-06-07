/*Write a program to read �n� numbers and find the frequency of occurrence of each
number. */
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j, count, n;
	int a[50], freq[50];
	printf("\nEnter the number of elements in an array:");
	scanf("%d", &n);

	printf("\nEnter the elements of an Array  :  ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		freq[i] = -1;
	}

	for (i = 0; i < n; i++)
	{
		count = 1;
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				count++;
				freq[j] = 0;
			}
		}
		if (freq[i] != 0)
		{
			freq[i] = count;
		}
	}
	printf("\nThe Frequency of the elements in this Array is : \n");
	for (i = 0; i < n; i++)
	{
		if (freq[i] != 0)
		{
			printf("%d Occurs %d Times \n", a[i], freq[i]);
		}
	}
	getch();
	return 0;
}
