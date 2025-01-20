/*Write a program in C to make such a pattern using loop concept.
         5 4  3  2  1

         4 3  2  1

         3 2 1

         2 1

         1*/
#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 6 - i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}