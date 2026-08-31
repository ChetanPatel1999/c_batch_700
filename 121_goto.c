// wap to print a number 1 to 20 only even numbers.
#include <stdio.h>
void main()
{
    int i;
    i = 1; // 1
start:
    if (i % 2 == 0)
    {
        printf("%d ", i); // 2 4 6
    }
    i++; // 8
    if (i <= 20)
    {
        goto start;
    }
}