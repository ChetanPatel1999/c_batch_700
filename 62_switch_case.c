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
    scanf("%d", &num); // 1
    switch (num)
    {
    case 1:
        printf("you select addition app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a + b;
        printf("addition = %d\n", c);
        break;
    case 2:
        printf("you select subtraction app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a - b;
        printf("subtraction = %d\n", c);
        break;
    case 3:
        printf("you select multiplication app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a * b;
        printf("multiplication = %d\n", c);
        break;
    case 4:
        printf("you select division app\n");
        printf("enter frist num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a / b;
        printf("division = %d\n", c);
        break;

    default:
        printf("please enter 1 to 4");
    }
}