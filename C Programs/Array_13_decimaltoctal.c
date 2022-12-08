#include <stdio.h>
int main()
{
    int i, n, num[10];
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; n > 0; i++)
    {
        num[i] = n % 8;
        n = n / 8; 
    }
    printf("Decimal to octal number is : ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", num[i]);
    }

    return 0;
}