// we can change variable value using pointer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("a = %d\n", a); // 12
    *ptr = 34;
    printf("a = %d\n", a); //34
}