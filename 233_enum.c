// enum :- enum is used to create constant intger value in bulk.
#include <stdio.h>
enum marks
{
    passing_marks = 33,
    total_marks = 100
};
void main()
{
    int marks = 45;
    if (marks >= passing_marks)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

    printf("\ntotal marks = %d", total_marks);
}