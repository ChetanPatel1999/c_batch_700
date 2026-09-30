// wap to print square of given number.
#include <stdio.h>
void main()
{
    int num, square;
    FILE *ptr;
    ptr = fopen("C:\\Users\\PC\\Desktop\\sarvagya\\square.txt", "a");
    printf("enter a num = ");
    scanf("%d", &num); // 7
    square = num * num;
    printf("square of %d = %d", num, square);
    fprintf(ptr, "square of %d = %d\n", num, square);
    fclose(ptr);
}