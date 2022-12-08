// #How to pass a 2D Array to the function 
#include<stdio.h>
void display();
int num[3][4];
int main()
{
    int x[3][4],i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            scanf("%d",&x[i][j]);
        }
        
    }
    display(x);
}
void display()
{
    int p[3][4],i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d",p[i][j]);
        }
        
    }
    

   
}