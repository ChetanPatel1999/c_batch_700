// how to take array element from user and display it.
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
}