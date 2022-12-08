#include<stdio.h>
int main()
{
    int height,base,area;
    printf("Enter the height :");
    scanf("%d",& height);
    printf("Enter the base :");
    scanf("%d",&base);
    area=height*base;
    printf("The area of triangle is :%d", area);
    return 0;
    
}