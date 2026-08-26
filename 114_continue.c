// wap to print odd number using continue stmnt
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++) // 15
    {
        if (i >= 8)
        {
            continue;
        }
        printf("%d ", i); //
    }
}