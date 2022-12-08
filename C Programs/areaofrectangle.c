#include<stdio.h>

int main()
{
    int length,width,area;
    printf("Enter the length of rectangle ;");
    scanf("%d",&length);
    printf("Enter the width of rectangle :");
    scanf("%d",&width);
    area=width*length;
    printf("The area of rectangle is:%d",area);
    return(0);
}