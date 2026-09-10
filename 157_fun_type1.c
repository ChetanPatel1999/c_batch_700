// no return type no parameter
#include <stdio.h>
void addition(  )
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
void square( )
{
    int num, s;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    s = num * num;
    printf("sqaure = %d\n", s);
}
void cube()
{
    int num, s;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    s = num * num * num;
    printf("cube = %d\n", s);
}
void greatestNum()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("greatest num = %d", a);
    }
    else
    {
        printf("greatest num = %d", b);
    }
}
void factorial()
{
    int num, fact = 1, i;
    printf("enter a num : ");
    scanf("%d", &num);         // 5
    for (i = 1; i <= num; i++) // 6
    {
        fact = fact * i; // 120
    }
    printf("factorial = %d\n", fact);
}
void main()
{
    factorial();
}