// . Write a program to take array elements from the user, store their squares in a new array, and display the
// new array.
#include <stdio.h>
void main()
{
    int arr[5] = {3, 2, 5, 6, 7}, i;
    int sqaureArr[5];

    // copy arr element square in squareArr
    for (i = 0; i < 5; i++) // 2
    {
        sqaureArr[i] = arr[i] * arr[i];
    }

    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nnew array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", sqaureArr[i]);
    }
}