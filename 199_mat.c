// Write a program to find and display only even element of a matrix.
#include <stdio.h>
void main()
{
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

    int e = 0, o = 0;
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 2
        {
            if (mat[i][j] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
    }
    printf("\ntotal even = %d\n", e);
    printf("total odd = %d\n", o);
}