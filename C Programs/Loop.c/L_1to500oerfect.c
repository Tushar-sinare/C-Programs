#include <stdio.h>

int main()
{
    int a, b, n = 500, sum;

    printf("All Perfect numbers between 1 to %d:\n", n);

    for (a = 1; a <= n; a++)
    {
        sum = 0;

        for (b = 1; b < a; b++)
        {
            if (a % b == 0)
            {
                sum += b;
            }
        }

        if (sum == a)
        {
            printf("%d", a);
        }
    }

    return 0;
}
