#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("a = %d\n", a);       // 12
    printf("&a = %d\n", &a);     // 56789
    printf("ptr = %d\n", ptr);   // 56789
    printf("&ptr = %d\n", &ptr); // 938282
    printf("*ptr = %d\n", *ptr); // 12
}