// wap to print a msg 5 times using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
lab:
    printf("%d ", i); // 1 2  3
    i++;               // 4
    if (i <= 20)
    {
        goto lab;
    }
}