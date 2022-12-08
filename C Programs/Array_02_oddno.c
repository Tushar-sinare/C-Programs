#include <stdio.h>
int main()
{
    int i, j, data[10];
    printf("Enter a number: ");
    scanf("%d", &j);
    for (i = 0; i < j; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &data[i]);
    }
    for (i = 0; i < j; i++)
    {
        if (data[i] % 2 != 0)
        {
            printf("%d\n", data[i]);
        }
    }

    return 0;
}