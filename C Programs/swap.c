#include <stdio.h>
int main()
{
    int var1, var2, temp; 
    printf("Enter the first value :");
    scanf("%d", &var1);
    printf("Enter the second value :");
    scanf("%d", &var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("the value of first var is :%d\n", var1);
    printf("the value of second var is :%d\n", var2);
    return (0);
}
