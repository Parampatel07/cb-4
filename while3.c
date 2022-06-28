// ..2,4,6,8,10,12,14,16
#include <stdio.h>
void main()
{
    int number = 2;
    while(number<200)
    {
        printf("%d ", number);
        number = number + 2;
    }
}