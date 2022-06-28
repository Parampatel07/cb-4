// write a programe to find which triangle is greater out of three triangle
#include <stdio.h>
void main()
{
    int hieght1, base1, hieght2, base2, hieght3, base3, height4, base4, area4, area1, area2, area3;

    printf("Enter value for height 1");
    scanf("%d", &hieght1);
    printf("Enter value for base 1");
    scanf("%d", &base1);
    printf("Enter value for height 2");
    scanf("%d", &hieght2);
    printf("Enter value for base 2");
    scanf("%d", &base2);
    printf("Enter value for height 3");
    scanf("%d", &hieght3);
    printf("Enter value for base 3");
    scanf("%d", &base3);
    printf("Enter value for height 4");
    scanf("%d", &height4);
    printf("Enter value for base 4");
    scanf("%d", &base4);

    area1 = hieght1 * base1 / 2;
    area2 = hieght2 * base2 / 2;
    area3 = hieght3 * base3 / 2;
    area4 = height4 * base4 / 2;
    printf("Area of triangle 1 is %d \n", area1);
    printf("Area of triangle 2 is %d \n", area2);
    printf("Area of triangle 3 is %d \n", area3);
    printf("Area of triangle 4 is %d \n", area4);
    if (area1 == area2 && area2 == area3 && area3 == area4)
    {
        printf("invalid input");
    }
    else
    {
        if (area1 > area2)
        {
            if (area1 > area3)
            {
                if (area1 > area4)
                {
                    printf("area 1 is greater");
                }
                else
                {
                    printf("area 4 is greater");
                }
            }
            else
            {
                if (area3 > area4)
                {
                    printf("area 3 is greater");
                }
                else
                {
                    printf("area 4 is greater");
                }
            }
        }
        else
        {
            if (area2>area3)
            {
                if (area2>area4)
                {
                    printf("Area 2 is greater");
                }
                else
                {
                    printf("Area 4 is greater");
                }
            }
            else
            {
                if (area3>area4)
                {
                    printf("Area 3 is greater");
                }
                else
                {
                    printf("Area 4 is greater");
                }
            }
            
        }
    }
}