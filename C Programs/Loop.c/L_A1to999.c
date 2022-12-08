#include <stdio.h>
int main()
{
    int i, r, x, sum;
    printf("The armstrong number are:");

    for (i = 1; i <= 999; i++)
    {
        x = i;
        sum = 0;

        while (x != 0)

        {
            r = x % 10;
            sum = sum + r * r * r;
            x = x / 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}