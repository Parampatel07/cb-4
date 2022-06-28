// #write a program to print given month number as month name
#include <stdio.h>
void main()
{
    int month;

    printf("Enter value for month");
    scanf("%d", &month);
    if (month <= 0 || month > 12)
    {
        printf("invalid input");
    }
    else
    {

        if (month == 1)
        {
            printf("January");
        }
        else if (month == 2)
        {
            printf("Feburary");
        }
        else if (month == 3)
        {
            printf("March");
        }
        else if (month == 4)
        {
            printf("april");
        }
        else if (month == 5)
        {
            printf("may");
        }
        else if (month == 6)
        {
            printf("june");
        }
        else if (month == 7)
        {
            printf("july");
        }
        else if (month == 8)
        {
            printf("august");
        }
        else if (month == 9)
        {
            printf("sepetember");
        }
        else if (month == 10)
        {
            printf("octomber");
        }
        else if (month == 11)
        {
            printf("november");
        }
        else if (month == 12)
        {
            printf("december");
        }
    }
}