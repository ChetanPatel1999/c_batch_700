#include <stdio.h>
int i = 1; // globle variable
void main()
{
    printf("hello world institute\n");
    i++; // 2
    if (i <= 5)
    {
        main();
    }
}