#include <stdio.h>
int main()
{
    int r, n, c, sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    c=n;

    while (n > 0)
    {
        r = n % 10;
        sum = r + (sum * 10);
        n = n / 10;
        
    }
    if (c == sum)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("It is not a Palindrome number");
    }

    return 0;
}