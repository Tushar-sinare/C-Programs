#include <stdio.h>
int main()
{
    int a, *p;
    printf("Enter to check odd/even: ");
    scanf("%d", &a);

    p = &a;
    if (*p % 2 == 0)
    {
        printf("Even");
    } 
    else
    {
        printf("Odd");
    }

    return 0;
}