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
    for (i = 1; i <= 10; i++) // 2
    {
        int res = square(i);
        if (res % 2 == 0)
        {
            printf("square of %d = %d\n", i, res);
        }
    }
}