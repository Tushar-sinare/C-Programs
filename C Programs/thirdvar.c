#include<stdio.h>
int main()
{
    int var1,var2,temp;
    printf("Enter a first a value :");
    scanf("%d", &var1);
    printf("Enter a second value :");
    scanf("%d", &var2);
    temp=var1;
    var1=var2;
    var2=var1;
    printf("The swap value of first & second \n First value is %d\n second value is%d",var1,var2);
    return 0;

}