// Write a program using switch-case to check whether the entered character 
// is a vowel or a consonant.
// #include<stdio.h>
// void main()
// {
//    char alpha;
//    printf("enter a alpha : ");
//    scanf("%c",&alpha);
//    switch(alpha)
//    {
//      case 'a' :printf("alpha is vovle");break;
//      case 'e' :printf("alpha is vovle");break;
//      case 'i' :printf("alpha is vovle");break;
//      case 'o' :printf("alpha is vovle");break;
//      case 'u' :printf("alpha is vovle");break;
//      default:printf("alpha is consonent");
//    }
// }





// #include<stdio.h>
// void main()
// {
//    char alpha;
//    printf("enter a alpha : ");
//    scanf("%c",&alpha);// e
//    switch(alpha)
//    {
//      case 'a' :;
//      case 'e' :;
//      case 'i' :;
//      case 'o' :;
//      case 'u' :printf("alpha is vovle");break;
//      default:printf("alpha is consonent");
//    }
// }




#include<stdio.h>
void main()
{
   char alpha;
   printf("enter a alpha : ");
   scanf("%c",&alpha);// p
   switch(alpha=='a' || alpha=='e' ||alpha=='i' ||alpha=='o' ||alpha=='u')
   {
     case 1: printf("alpha is vovle");break;
     case 0: printf("alpha is consonent");break;
   }
}