#include <stdio.h>
void main()
{
    int count = 0,row=0;
    while(row<10)
    {
        count = 0;
        while (count < row)
        {
            printf("* ");
            count = count + 1;
        }
        printf("\n");
        row=row+1;
    }
}