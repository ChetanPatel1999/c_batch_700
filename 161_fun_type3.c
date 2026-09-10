#include <stdio.h>
int square(int num)
{
    int s;
    s = num * num;
    return s;
}
float average(int a, int b)
{
    float av;
    av = (a + b) / 2.0;
    return av;
}

int greatestNum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int factorial(int num) // 5
{
    int fact = 1, i;
    for (i = 1; i <= num; i++) // 6
    {
        fact = fact * i; // 120
    }
    return fact;
}

void main()
{
    printf("factorial = %d\n", factorial(5));

    // int res = greatestNum(45, 89);
    // printf("greatest num : %d\n", res);
    // printf("average = %.1f\n", average(12, 13));
    // int ans = square(4);
    // printf("square = %d\n", ans);
    // printf("square = %d\n", square(6));
    // printf("square = %d\n", square(8));
}