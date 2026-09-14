// wap to print factorial using recursion.
#include <stdio.h>
// int factorial(int num)
// {
//     int i, fact = 1;
//     for (i = 1; i <= num; i++)//6
//     {
//         fact = fact * i;//120
//     }
//     return fact;
// }

int factorial(int num)
{
    static int fact = 1, i = 1;
    fact = fact * i; // 120
    i++;             // 6
    if (i <= num)
    {
        factorial(num);
    }
    return fact;
}
void main()
{
    printf("factorial = %d", factorial(6));
}