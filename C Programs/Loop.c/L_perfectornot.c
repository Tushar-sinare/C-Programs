#include <stdio.h>
int main()
{
    int num,n, sum = 0, i;
    printf("Enter a number :");
    scanf("%d", &  num);
    for ( i = 1; i <=num/2; i++)
    {
        n=num % i;
        if (n==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
    {
        printf("\n%d is perfect number", num); /* code */
    }
        else
        
             printf("\n%d is not a perfect number", num);
    
    return 0;
}