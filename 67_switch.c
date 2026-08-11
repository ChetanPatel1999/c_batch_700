// . Write a program using switch-case in C to convert an input character from
// lowercase to uppercase or uppercase to lowercase.
// If the input is not an alphabet letter, display "Invalid character."

// #include <stdio.h>
// void main()
// {
//     char ch;
//     printf("enter a char : ");
//     scanf("%c", &ch); // A
//     if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//     {
//         if (ch >= 'a' && ch <= 'z')
//         {
//             printf("upper case : %c", ch - 32);
//         }
//         else
//         {
//             printf("lower case : %c", ch + 32);
//         }
//     }
//     else
//     {
//         printf("char is not alphabet");
//     }
// }



// #include <stdio.h>
// void main()
// {
//     char ch;
//     printf("enter a char : ");
//     scanf("%c", &ch); // A
//     switch (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//     {

//     case 1:
//         if (ch >= 'a' && ch <= 'z')
//         {
//             printf("upper case : %c", ch - 32);
//         }
//         else
//         {
//             printf("lower case : %c", ch + 32);
//         }
//         break;

//     case 0:
//         printf("char is not alphabet");
//     }
// }



#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch); // A
    switch (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {

    case 1:
        switch(ch >= 'a' && ch <= 'z')
        {
           case 1 :   printf("upper case : %c", ch - 32); break;
           case 0 : printf("lower case : %c", ch + 32); break;
        }
       break;
    case 0:
        printf("char is not alphabet");
    }
}