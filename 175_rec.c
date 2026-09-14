// Write a program to display 34 to 67 numbers using recursion
#include <stdio.h>
// void range(int s, int e)
// {
//     int i;
//     for (i = s; i <= e; i++)
//     {
//         printf("%d ", i);
//     }
// }

void range(int s, int e)
{
    printf("%d ", s);
    s++;//13
    if (s <= e)
    {
        range(s, e);
    }
}
void main()
{
    range(34, 67);
}