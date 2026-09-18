#include <stdio.h>
void main()
{
    // r  c
    int mat[2][2] = {{34, 56}, {67, 89}};
    printf("matrix element are : \n");
    int i, j;
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 2; j++) // 2
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}