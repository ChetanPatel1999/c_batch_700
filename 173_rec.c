//wap to print 1 to 10 number using recursive call in main function.
#include <stdio.h>
void main()
{
    static int i = 1;
    printf("%d\n", i);
    i++;
    if (i <= 10)
    {
        main();
    }
}