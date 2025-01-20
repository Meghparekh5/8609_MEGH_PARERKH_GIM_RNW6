#include<stdio.h>
void main()
{
    int month;
    printf("Enter no of month = ");
    scanf("%d",&month);
    // printf(" \npress 1 for january");
    // printf(" \npress 2 for febuary");
    // printf(" \npress 3 for march");
    // printf(" \npress 4 for april");
    // printf(" \npress 5 for may   ");
    // printf(" \npress 6 for june");
    // printf(" \npress 7 for july");
    // printf(" \npress 8 for august");
    // printf(" \npress 9 for september");
    // printf(" \npress 10 for october");
    // printf(" \npress 11 for november");
    // printf(" \npress 12 for december");
    switch(month)
    {
        case 1:
        printf("\nTotal days in this month are 31 ");
        break;
        case 2:
        printf("\nTotal days in this month are 28 ");
        break;
        case 3:
        printf("\nTotal days in this month are 31 ");
        break;
        case 4:
        printf("\nTotal days in this month are 30 ");
        break;
        case 5:
        printf("\nTotal days in this month are 31 ");
        break;
        case 6:
        printf("\nTotal days in this month are 30 ");
        break;
        case 7:
        printf("\nTotal days in this month are 31 ");
        break;
        case 8:
        printf("\nTotal days in this month are 31 ");
        break;
        case 9:
        printf("\nTotal days in this month are 30 ");
        break;
        case 10:
        printf("\nTotal days in this month are 31 ");
        break;
        case 11:
        printf("\nTotal days in this month are 30 ");
        break;
        case 12:
        printf("\nTotal days in this month are 31 ");
        break;
    default:
    {
        printf("\nselect between 1-12");
    }
    }
}