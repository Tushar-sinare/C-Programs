#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Factors of given number ");
    for (i = 1; i <= num; i++)

    {
        if (num % i == 0)
        {
            printf("%d", i);
        }
    }

    return 0;
}