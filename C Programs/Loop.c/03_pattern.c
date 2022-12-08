#include<stdio.h>
int main()
{
  int i,j,k,row;
  printf("Enter the row: ");
  scanf("%d" ,&row);

     for ( i = row; i >= 1; i--)
     {
        for ( j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("  \n");
     }
     
    return 0;
}