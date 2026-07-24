#include <stdio.h>
void main()
{
    // int res = 12 > 77 && 19 == 19 && 56 > 9;
    // int res = 12 > 77 || 19 == 19 || 56 > 9;
    int res = !(4 == 4);
    printf("result = %d", res);
}