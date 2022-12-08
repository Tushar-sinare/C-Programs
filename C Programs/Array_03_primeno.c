#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, flag = 0, data[10], no;
    printf("Enter a number: ");
    scanf("%d", &j);

    for (i = 0; i < j; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &j);
    }
    for (i = 0; i < j; i++)
    {
        no = data[i];
        flag = 0;
    }

    for (j = 2; j <= no / 2; j++)
    {
        if (no % j == 0)
        {
            flag = 1;
            break;
        }
        if (flag == 0)
        {
            printf("The prime number is :%d", no);
        }
    }
    return 0;
}