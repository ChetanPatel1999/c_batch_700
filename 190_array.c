// Write a program to take array elements from the user, add 5 to each element, store the results in a new
//  array, and display the new array.
#include <stdio.h>
void main()
{
    int arr[5] = {3, 2, 5, 6, 7}, i;
    int newArr[5];

    // copy arr element+5 in new array
    for (i = 0; i < 5; i++) // 2
    {
        newArr[i] = arr[i] + 5;
    }

    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nnew array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", newArr[i]);
    }
}