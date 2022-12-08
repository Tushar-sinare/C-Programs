//#include<stdio.h>
// int addition(int,int);
// int main()
// {
// int num1,num2,sum;
// printf("Enter the first number: ");
// scanf("%d", &num1);
// printf("Enter the second number: ");
// scanf("%d", &num2);
// sum = addition (num1,num2);
// printf("The addition of two number is %d", sum);
//     return 0;
// }
// int addition (int p, int q)
// {
// int sum;
// sum = p + q;
// return sum;
// }

#include <stdio.h>
int rectangle();
int total,length,width;
int main()
{
    int total;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of rectangle :");
    scanf("%d", &width);
    
    total = rectangle(); 
    printf("The area of rectangle is:%d",total);
    
    
}
int rectangle()
{
    int total;
    total = length * width;
    return total;
}