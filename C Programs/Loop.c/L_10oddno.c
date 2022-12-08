#include <stdio.h>
int main()
{
    int i;
    printf("enter the number :");

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", 2 * i - 1);
    }
    return 0;
}