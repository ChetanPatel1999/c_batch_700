// Write a program to display all even numbers present in an array..
#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 5 2 7 8 9
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\neven array element are : \n");
    // 5 2 7 8 9
    for (i = 0; i < 5; i++) // 4
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]); // 2 8
        }
    }
}