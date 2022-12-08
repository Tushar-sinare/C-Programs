#include<stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter the row :");
    scanf("%d", &row);
     for ( i = 1; i <= 4; i++)
     {
        for ( j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
            printf(" \n");
     }
     

    return 0;
}