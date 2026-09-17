//  Write a program to display the array elements in reverse order.
#include <stdio.h>
void main()
{
    int arr[5] = {3, 2, 5, 6, 7}, i;

    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // 3, 2, 5, 6, 7
    printf("\nreverse array element are :\n");
    for (i = 4; i >= 0; i--)//0
    {
        printf("%d ", arr[i]);
    }
}