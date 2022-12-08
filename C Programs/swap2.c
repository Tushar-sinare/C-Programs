#include<stdio.h>
int main()
{
    int var1,var2;
    printf("Enter the first value :");
    scanf("%d",&var1);
    printf("Enter the second value :");
    scanf("%d",&var2);
    var1=var1+var2;
    var2=var1-var2;
    var1=var1-var2;

    printf("After swap\n First swapping value is %d\n Second swapping value is %d",var1,var2);
    
    return 0;

}