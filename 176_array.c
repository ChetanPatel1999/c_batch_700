#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    printf("%d\n", arr); // its print base address of array
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);

    arr[3] = 900; // we can change array value
    arr[2] = 700;
    printf("---------------------\n");
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
}