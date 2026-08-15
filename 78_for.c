// wap to print evene number serise 1 to 30.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++) // 9
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}