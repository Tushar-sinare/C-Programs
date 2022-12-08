#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter the two number: ");
    scanf("%d %d", &a, &b);
    for (sum = 1; sum <= a * b; sum++)
    {
        if (a % sum == 0 && b % sum == 0)
        {
            printf("%d", sum);
        }
    }

    return 0;
}