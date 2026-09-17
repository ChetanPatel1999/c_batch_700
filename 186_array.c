//  Write a program to print squares of all numbers present in a given array.
#include <stdio.h>
void main()
{
    int arr[5] = {3, 2, 5, 6, 7}, i;

    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\narray element square are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i] * arr[i]);
    }
}