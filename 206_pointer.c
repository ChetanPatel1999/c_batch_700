#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr;
    ptr = &arr[0]; // 400
    int i;
    printf("enter array element :\n");
    for (i = 0; i < 5; i++) // 5
    {
        scanf("%d", ptr); // 13
        ptr++;            // 420
    }

    ptr = &arr[0]; // 400
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d \n", *ptr); // 7  25
        ptr++;                 // 408
    }
}