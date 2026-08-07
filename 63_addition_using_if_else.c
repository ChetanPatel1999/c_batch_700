// Write a program to make simple calculator.
//       Press 1 to addition
//       Press 2 to subtraction
//       Press 3 to multiplication
//       Press 4 to division

#include <stdio.h>
void main()
{
    int num, a, b, c;
    printf("<==== welcome to my calculator ====>\n");
    printf("   press 1 for addition \n");
    printf("   press 2 for subtraction \n");
    printf("   press 3 for multiplication \n");
    printf("   press 4 for division \n");
    printf("   press any number : ");
    scanf("%d", &num); // 3
    if (num == 1)
    {
        printf("you select addition app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a + b;
        printf("addition = %d\n", c);
    }
    else if (num == 2)
    {
        printf("you select subtraction app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a - b;
        printf("subtraction = %d\n", c);
    }
    else if (num == 3)
    {
        printf("you select multiplication app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a * b;
        printf("multiplication = %d\n", c);
    }
    else if (num == 4)
    {
        printf("you select division app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a / b;
        printf("division = %d\n", c);
    }
    else
    {
        printf("please eneter 1 to 4");
    }
}