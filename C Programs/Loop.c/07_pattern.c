#include<stdio.h>
int main()
{
    int i,j,k,sp,row;
    printf("Enter a row: ");
    scanf("%d", &row);
    sp=row;
    for ( i = 1; i <= 4; i++)
    {

        {
            printf(" "); 
        }
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        sp--;
    
    
    }
    return 0;
}