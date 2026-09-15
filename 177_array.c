#include <stdio.h>
void main()
{
    int ages[5] = {23, 56, 44, 76, 45};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", ages[i]);
    }

    ages[3] = 600;

    printf("after change array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", ages[i]);
    }
}