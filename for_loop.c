// 2,1,3,4,7,11,18,29,47
#include<stdio.h>
void main()
{
    int pre_num=2,cur_num=1,result;

    printf("%d ,",pre_num);
    printf("%d ,",cur_num);

    result=pre_num+cur_num;
    printf("%d ,",result);

    pre_num=result;
    result=pre_num+cur_num;
    printf("%d ,",result);

    cur_num=result;
    result=pre_num+cur_num;
    printf("%d ,",result);

}