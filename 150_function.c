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

void main()
{
  printf("main fun is start ...\n");
  addition(); // function calling
  printf("again in main program..\n");
  addition();
  printf("main fun is end ....\n");
  subtraction();
}