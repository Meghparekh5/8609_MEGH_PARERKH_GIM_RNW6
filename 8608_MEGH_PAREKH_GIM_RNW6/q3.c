#include<stdio.h>
    int cube(int num)  // num=number
    {
     
    return num*num*num;
    }

void main()
{
    int num,result;
    printf("Enter num = ");
    scanf("%d",&num);
   
    printf("cube of %d is =%d",num,cube(num));
}

