#include <stdio.h>
#include <stdlib.h>
/*
Authar: Aabir Sutradhar.
Date: 09/10/2024
*/

int main()
{
    printf("%c]0;%s%c", '\033', "Temperature Calculator", '\007'); //console Titel.
start:
    system("cls");
    printf("Temperature Calculator\n\n");
    int choise;
    float celsius=0, fahrenheit=0, kelvin=0;    //Variable declear.
    printf("::::::::: Menu :::::::::\n\n.................................\n 1.Celsius to Fahrenheit\t\t 2.Celsius to Kelvin\n 3.Fahrenheit to Celsius\t\t 4.Fahrenheit to Kelvin\n 5.Kelvin to Celsius\t\t\t 6.Kelvin to Fahrenheit\n.................................\n\n Choose any one : ");
    scanf("%d", &choise);

   if (choise == 1) //Celsius to Fahrenheit.
    {
        printf("Enter The Celsius value :");
        scanf("%f", &celsius);
        {
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("The Fahrenheit value is : %.4f", fahrenheit);
        }
    }
    else if (choise == 2) //Celsius to Kelvin.
    {
        printf("Enter The Celsius value :");
        scanf("%f", &celsius);
        {
            kelvin = celsius + 273;
            printf("The Kelvin value is : %.4f", kelvin);
        }
    }
    else if (choise == 3) //Fahrenheit to Celsius
    {
        printf("Enter The Fahrenheit value :");
        scanf("%f", &fahrenheit);
        {
            celsius = (fahrenheit-32)*5/9;
            printf("The Celsius value is : %.4f", celsius);
        }
    }
    else if (choise == 4) //Fahrenheit to Kelvin
    {
        printf("Enter The Fahrenheit value :");
        scanf("%f", &fahrenheit);
        {
            celsius = (fahrenheit - 32)*5/9;
            kelvin = celsius + 273;
            printf("The Kelvin value is : %.4f", kelvin);
        }
    }
    else if (choise == 5)  //Kelvin to Celsius.
    {
        printf("Enter The Kelvin value :");
        scanf("%f", &kelvin);
        {
            celsius = kelvin - 273;
            printf("The Celsius value is : %.4f", celsius);
        }
    }
    else if (choise == 6)  //Kelvin to Fahrenheit.
    {
        printf("Enter The Kelvin value :");
        scanf("%f", &kelvin);
        {
            celsius = kelvin - 273;
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("The Fahrenheit value is : %.4f", fahrenheit);
        }
    }
    else    //if press anathor key.
    { 
            printf("Syntex Error!!!");
    }
printf("\n");
system("pause");
{
    goto start;
}
return 0;
}