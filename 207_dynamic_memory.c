#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp;
    ptr = malloc(20); // 400
    temp = ptr;       // 400
    int i;
    printf("enter array element :\n");
    for (i = 0; i < 5; i++) // 5
    {
        scanf("%d", ptr); // 13
        ptr++;            // 420
    }

    ptr = temp; // 400
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d \n", *ptr); // 7  25
        ptr++;                 // 408
    }

    ptr = temp;
    free(ptr); // delete dynamic allocate memory
}