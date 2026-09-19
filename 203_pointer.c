//when we increase a pointer by one so its value increase
// by 4 if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("&a= %d\n", &a);   // 1234
    printf("ptr= %d\n", ptr); // 1234
    ptr++;                    // ptr = ptr + 1;
    printf("&a= %d\n", &a);   // 1234
    printf("ptr= %d\n", ptr); // 1235
}