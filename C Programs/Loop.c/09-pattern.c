#include <stdio.h>
int main()
{
    int i, j, k, sp, row;
    printf("Enter the row: ");
    scanf("%d", &row);
    sp = row;
    for (i = 1; i <= row; i++)
    {
        for (k = 1; k <sp; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        sp--;
    }

    sp = 2;
    for (i = row-1; i >= 1; i--)
    {
        for (k = 0; k<sp; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
    
    printf("\n");
    sp++;
    
    }
    return 0;
}