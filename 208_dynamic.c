#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, n;
    printf("enter size of dynamic array :");
    scanf("%d", &n);                      // 5
    ptr = (int *)malloc(n * sizeof(int)); // 400
    temp = ptr;                           // 400
    int i;
    printf("enter array element :\n");
    for (i = 0; i < n; i++) // 5
    {
        scanf("%d", ptr); // 13
        ptr++;            // 420
    }

    ptr = temp; // 400
    printf("array element are : \n");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", *ptr); // 7  25
        ptr++;               // 408
    }

    ptr = temp;
    free(ptr); // delete dynamic allocate memory
}