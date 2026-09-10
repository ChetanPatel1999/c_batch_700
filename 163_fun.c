#include <stdio.h>
int square(int num)
{
    int s;
    s = num * num;
    return s;
}
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//2
    {
        printf("square of %d = %d\n",i,square(i));
    }
}