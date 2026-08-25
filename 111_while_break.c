#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d \n", i); // 1  2  3
        i++;                // 4
    }
    printf("after loop");
}