#include <stdio.h>
void main()
{
    int count = 0,cloum=15;

    printf("Enter value for number of colum ");
    scanf("%d",&cloum);
    while(cloum>0)
    {
        while (count < cloum)
        {
            printf("%d ",count);
            count = count + 1;
        }
        printf("\n");
        count = 0;
        cloum--;
    }
}