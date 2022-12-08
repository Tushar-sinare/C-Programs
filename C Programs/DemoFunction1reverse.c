// Without returning value and without  passing parameter by taking Global variable
 
/*#include<stdio.h>
void reverse();                                                                      
int rev,num;
int main()
{
printf("Enter a number: ");
scanf("%d",&num);

// <---Funtion Call--->

reverse();
}
void reverse()
{
    int rem;
    while (num!=0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("rev = %d", rev);
}*/

// Without returning value and with passing parameter by taking Local variable

/*#include <stdio.h>
void reverse(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    reverse(num);
}
void reverse(int n)
{
    int rev = 0, rem, num;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("rev = %d", rev);
}*/

// With returning value and without passing parameter by taking Global variable

/*#include<stdio.h>
int reverse();
int num;
int main()
{
int ans;
printf("Enter a number: ");
scanf("%d", &num);
ans = reverse();
printf("rev = %d", ans);
}
int reverse()
{
    int rev = 0, rem,n;
    rem = n % 10;
    rev = rev * 10 + rem;
    num = num / 10;
    return rev;
}*/

// With return value and with passing parameter by taking Global variable multiplication
// #include <stdio.h>
// int reverse(int);

// int main()
// {
//     int num, rem, ans;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     ans = reverse(num);
    
//     printf("Reverse of number is :%d", ans);
// }
    
//     int reverse(int num)
//     {
//         int rem,rev = 0;
//         while (num != 0)
//         {
//             rem = num % 10;
//             rev = rev * 10 + rem;
//             num = num / 10;
//         }
//          return rev;
//     }
    
        //Program for multiplication
       #include<stdio.h>
       void multiplication();
       int num1,num2,multi;
       int main()
       {
        printf("Enter a first number: ");
        scanf("%d", &num1);
        printf("Enter a second number: ");
        scanf("%d", &num2);
        multiplication();

       }
       void multiplication()
       {
        multi = num1 * num2;
        printf("The multiplication of two number is :%d", multi);
        
       } 
