// how to take matrix element from user and display matrix.
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
            printf("enter element pos[%d][%d] : ",i,j);
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
}