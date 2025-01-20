/*C program to find sum of elements of a matrix.*/
#include <stdio.h>
void main()
{
    int arr[20][20], i, j, row, column, sum = 0;
    printf("Enter row = ");
    scanf("%d", &row);
    printf("Enter column = ");
    scanf("%d", &column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("arr[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    // original matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of all element in matrix is =%d ", sum);
}