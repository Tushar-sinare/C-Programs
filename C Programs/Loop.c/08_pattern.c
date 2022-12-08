#include <stdio.h>
int main()
{
    int i, j, k, sp,row;
    printf("Enter the row: ");
    scanf("%d", & row);
    sp = 0;
    for (i = row; i >= 1; i--)
    {
        for (k = 0; k <= sp; k++)
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