//  Write a program to find the sum of all elements in an array.
#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++) // 0 1 2 3 4
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++) // 1
    {
        sum = sum + arr[i];
    }
    printf("\nsum of all array element are : %d", sum);
}