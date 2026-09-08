#include <stdio.h>
void addition()
{
    printf("this is addition app :\n");
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}

void subtraction()
{
    printf("this is subtraction app :\n");
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction = %d\n", c);
}

void multiplication()
{
    printf("this is multiplication app :\n");
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplication = %d\n", c);
}
void division()
{
    printf("this is division app :\n");
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a / b;
    printf("division = %d\n", c);
}
void main()
{
    int num;
    printf("<=== welcome to my calculator ===>\n");
    printf("     press 1 for addition : \n");
    printf("     press 2 for subtraction : \n");
    printf("     press 3 for multiplication : \n");
    printf("     press 4 for division : \n");
    printf("     press any number : ");
    scanf("%d", &num); // 2
    if (num == 1)
    {
        addition();
    }
    else if (num == 2)
    {
        subtraction();
        
    }
    else if (num == 3)
    {
        multiplication();
    }
    else if (num == 4)
    {
        division();
    }
    else
    {
        printf("please enter 1 to 4");
    }
}