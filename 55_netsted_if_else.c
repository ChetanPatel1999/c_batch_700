// club mini project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 30

    if (age >= 18)
    {
        printf("welcome to my club !\n");
        printf("club menu : \n");
        printf("1.  noodles  : 150\n");
        printf("2.  sandwitch  : 100\n");
        printf("3.  cold coffe  : 180\n");
        printf("place order to enter num : ");
        scanf("%d", &order); // 1
        if (order == 1)
        {
            printf("your noodles is ordered please pay 150 rs\n");
        }
        else if (order == 2)
        {
            printf("your sandwitch is ordered please pay 100 rs\n");
        }
        else if (order == 3)
        {
            printf("your cold coffe is ordered please pay 180 rs\n");
        }
        else
        {
            printf("please enter 1 to 3\n");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}