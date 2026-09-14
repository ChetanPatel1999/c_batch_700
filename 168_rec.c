// wap to print 1 to 10 numbers using recursion.
#include <stdio.h>
void number()
{
    static int i = 1;
    printf("%d \n", i); // 1  2  3  4  5
    i++;                // 6
    if (i <= 10)
    {
        number();
    }
}
void main()
{
    number();
}