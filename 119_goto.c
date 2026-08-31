// wap to print a number 1 to 20.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
lab:
    printf("%d ", i);
    i++; // 2
    if (i <= 20)
    {
        goto lab;
    }
}