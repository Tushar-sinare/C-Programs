#include<stdio.h>
void triangle( );
int height,base,area;
int main()
{
    
    printf("Enter the height: ");
    scanf("%d", &height);
    printf("Enter the base: ");
    scanf("%d", &base);
    triangle( );

}
void triangle()
{    
   
    area = height* base;
    printf("The area of triangle is: %d", area);
}