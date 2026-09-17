//  Write a program to count how many even numbers are present in an array.
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int count = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("\ntotal even number = %d", count);
}