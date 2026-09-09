// no return type but,with parameter
#include <stdio.h>
void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
}
void square(int num)
{
    int s;
    s = num * num;
    printf("sqaure = %d\n", s);
}

void greatestNum(int a, int b)
{
    if (a > b)
    {
        printf("greatest num = %d\n", a);
    }
    else
    {
        printf("greatest num = %d\n", b);
    }
}
void factorial(int num) // 6
{
    int fact = 1, i;
    for (i = 1; i <= num; i++) // 6
    {
        fact = fact * i; // 120
    }
    printf("factorial = %d\n", fact);
}

void main()
{

    factorial(6);
    factorial(3);
    // greatestNum(45, 78);
    // greatestNum(500, 100);

    // int i;
    // for (i = 1; i <= 5; i++)//2
    // {
    //     square(i);
    // }
    // square(8);
    // square(12);
    // addition(12, 67);
    // addition(10, 50);
    // addition(500, 30);
}