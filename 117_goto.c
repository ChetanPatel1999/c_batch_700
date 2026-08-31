// wap to print a msg 5 times using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
start:
    printf("hello world institute\n"); // 5
    i++;                               // 6
    if (i <= 5)
    {
        goto start;
    }
}