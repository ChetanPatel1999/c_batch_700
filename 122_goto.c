// wap to print a square 1 to 5.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    printf("%d \n", i * i);
    i++;
    if (i <= 5)
    {
        goto start;
    }
}