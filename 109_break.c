#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 5
    {
        printf("%d \n", i);
        if (i == 7)
        {
            break;
        }
    }
    printf("after loop");
}