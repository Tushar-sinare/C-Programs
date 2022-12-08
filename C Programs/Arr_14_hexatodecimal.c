#include <stdio.h>
int main()
{
    int i, temp, rem, j;
    char no[i];
    printf("Enter a number: ");
    scanf("%d", &temp);
    while (temp != 0)
    {
        rem = temp % 16;
    }
    if (rem < 10)
    {
        rem = rem + 48;
    }
    else
    {
        rem = rem + 55;
        no[i++] = rem;
        temp = temp / 16;
    }
    printf("Hexadecimal number is : ");
    for (j = i -1; j >= 0; j--)
    {
        printf("%d", no[j]);
    }

    return 0;
}