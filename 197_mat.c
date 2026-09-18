//  Write a program to find the sum of all elements in a matrix.
#include <stdio.h>
void main()
{
    // r  c
    int r, c;
    printf("enter row in matrix : ");
    scanf("%d", &r);
    printf("enter column in matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++) // 1
        {
            scanf("%d", &mat[i][j]);
        }
    }

    
    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 2
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    int sum = 0;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 2
        {
            sum = sum + mat[i][j];
        }
    }

    printf("\nsum of all matrix element = %d", sum);
    printf("\naverage of all matrix element = %.2f", sum / 9.0);
}