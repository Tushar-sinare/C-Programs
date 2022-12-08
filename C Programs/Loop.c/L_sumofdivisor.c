#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("The sum number :");
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}