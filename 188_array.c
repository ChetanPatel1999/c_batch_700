// . Write a program to copy elements from one array to another.
#include <stdio.h>
void main()
{
    int arr[5] = {3, 2, 5, 6, 7}, i;
    int copyarr[5];


    //copy arr to copyarr
    for (i = 0; i < 5; i++)//2
    {
        copyarr[i] = arr[i];
    }

    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\ncopyarray element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", copyarr[i]);
    }
}