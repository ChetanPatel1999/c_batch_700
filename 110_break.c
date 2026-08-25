#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 4
    {
        if (i < 4)
        {
            printf("%d \n", i);
        }
        else
        {
            break;
        }
        printf("%d \n", i);
    }
    printf("after loop");
}