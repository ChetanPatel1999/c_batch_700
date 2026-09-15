//array address print
#include <stdio.h>
void main()
{
    int ages[5] = {23, 56, 44, 76, 45};
    int i;
    printf("array element address are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d\n", &ages[i]);
    }
}