/*: Write a program to enter the temperature in degree Celsius and display it in Fahrenheit
and vice-versa. [NOTE: C = (5.0/9.0) � (F - 32)]*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float temp_celsius,temp_fahrenheit; //declaration of variable
    int your_choice;
    printf("1.Press 1 for Celsius to Fahrenheit. \n2.Press 2 for Fahrenheit to Celsius. \nEnter your choice:");
    scanf("%d",&your_choice);
    if(your_choice==1)
    {
        printf("\nEnter the temperature in Fahrenheit:");
        scanf("%f",&temp_fahrenheit);
        temp_celsius=(5.0/9.0)*(temp_fahrenheit-32);
        printf("\nThe temperature in Celsius is:%.2f\n",temp_celsius);

    }
    else
    {
        printf("\nEnter the temperature in Celsius:");
        scanf("%f",&temp_celsius);
        temp_fahrenheit=(9.0/5.0*temp_celsius)+32;
        printf("\nThe temperature in Fahrenheit is:%.2f\n",temp_fahrenheit);

    }
    
    getch();
    return 0;
}



