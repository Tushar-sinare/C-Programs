#include <stdio.h>
int main()
{
    int a, n, b = 0, t;
    printf("Enter the no:");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        a = n % 10;
        b = b + a * a * a;
        n = n / 10;
    }
    if (b == t)
    {
        printf("its an armstrong number");
    }
    else
    {
        printf("its not an armstrong number");
    }
    return 0;
}