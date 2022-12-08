#include <stdio.h>
int main()
{
    int i, num, sum, rem, no, no1;
    int data[10];
    printf("Enter a array size: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter a  number: ");
        scanf("%d", &data[i]);
    }
    for (i = 0; i < num; i++)
    {
        no = data[i];
        sum = 0;
        no1 = no;
        while (no1 > 0)
        {
            rem = no1 % 10;
            sum = rem + sum * 10;
            no1 = no1 / 10;
        }
        if (sum == no)
        {
            printf("The palindrome number is %d\n", no);
        }
        else
        {
             printf("The  Not-palindrome number is %d\n", no);
        }
    }

    return 0;
}