#include <stdio.h>
void main()
{
    // r  c
    int mat[3][3] = {{34, 56, 78}, {67, 89, 23}, {44, 55, 95}};
    printf("matrix element are : \n");
    printf("%d ", mat[0][0]);
    printf("%d ", mat[0][1]);
    printf("%d \n", mat[0][2]);
    printf("%d ", mat[1][0]);
    printf("%d ", mat[1][1]);
    printf("%d \n", mat[1][2]);
    printf("%d ", mat[2][0]);
    printf("%d ", mat[2][1]);
    printf("%d \n", mat[2][2]);
}