#include <stdio.h>
void square(int num)
{
    int s;
    s = num * num;
    printf("sqaure of %d = %d\n", num, s);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)//4
    {
        square(i);
    }
}
void main()
{
    range(1, 5);
    printf("-------------------\n");
    range(3, 8);
}