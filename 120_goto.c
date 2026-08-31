// wap to print a number 1 to 20.
#include <stdio.h>
void main()
{
    int i;
    i = 25;
    printf("%d ", i);
    i++; //26
    if (i <= 20)
    {
        goto lab;
    }
    printf("stmnt 1\n");
    printf("stmnt 2\n");
    printf("stmnt 3\n");
lab:
    printf("after lable");

}