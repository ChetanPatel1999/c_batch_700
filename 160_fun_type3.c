// with return type with parameter
// return type :- its tell which data type value is return by function.
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res = addition(12, 9);
    printf("sum = %d\n", res);

    res = addition(4, 13);
    printf("sum = %d\n", res);

    printf("sum = %d", addition(10, 40));
}