//Write a program to calculate area of rectangle. 
#include<stdio.h>
void main()
{
	float length,width,area;
	printf("enter length = ");
	scanf("%f",&length);
	printf("enter width = ");
	scanf("%f",&width);
	area= length*width;
	printf("area of reactangle = %.2f",area);
}
