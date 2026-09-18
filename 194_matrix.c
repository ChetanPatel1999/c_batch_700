#include <stdio.h>
void main()
{
    // r  c
    int mat[2][3] = {{34, 56, 78}, {67, 89, 23}};
    printf("matrix element are : \n");
    int i, j;
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 3; j++) // 2
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}