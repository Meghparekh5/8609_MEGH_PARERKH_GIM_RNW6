#include<stdio.h>
void main()
{
    int first_angle,second_angle,third_angle;
    printf("Enter first_angle= ");
    scanf("%d",&first_angle);
    printf("Enter second_angle= ");
    scanf("%d",&second_angle);
    third_angle = 180-(first_angle + second_angle);
    printf("third angle of triangle is =%d",third_angle);
}