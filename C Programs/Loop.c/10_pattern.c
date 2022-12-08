#include <stdio.h>
int main()
{
    int i, j, row, no;
    printf("Enter a number: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        no = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", no);
            no++;
        }
    
    printf(" \n");
    }
    return 0;
}