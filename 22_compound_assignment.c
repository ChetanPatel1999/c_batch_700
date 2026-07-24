#include <stdio.h>
void main()
{
    int a = 12;
    int b = 7;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a += b;
    // a -= b;

    // b += b;

    // a += 10;

    // a *= b;

    a %= b;

    printf("a = %d\n", a); // 22
    printf("b = %d\n", b); // 7
}