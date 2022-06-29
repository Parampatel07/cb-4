#include <stdio.h>
void main()
{
    int count = 0,number=1,result=1;

    while (count < 5)
    {
        printf("%d ",number);
        count = count + 1;
        // number=number+1;
    }
    printf("\n");
    // count = 0;
    number=2;
    while (number < 5)
    {
        printf("%d ",number);
        number++;
    }
    printf("\n");
    number=1;
    while (number < 4)
    {
        printf("%d ",number);
        number++;
    }
    printf("\n");
    count = 0;
    while (count < 2)
    {
        printf("* ");
        count++;
    }
    printf("\n");
    count=0;
    while(count<1)
    {
        printf("* ");
        count++;
    }
}