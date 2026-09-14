#include <stdio.h>
void main()
{
    static int i = 1;
    printf("hello world institute\n");
    i++; // 2
    if (i <= 5)
    {
        main();
    }
}