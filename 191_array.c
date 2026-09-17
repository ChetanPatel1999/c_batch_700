// . Write a program to find the maximum element in an array.
#include <stdio.h>
void main()
{
    int arr[5] = {13, 232, 56, 6, 378}, i;

    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // 0    1   2  3  4
    // 13, 22, 56, 6, 37
    int max = arr[0]; // 13
    for (i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i]; // 56
        }
    }
    printf("\nmax element : %d", max);
}