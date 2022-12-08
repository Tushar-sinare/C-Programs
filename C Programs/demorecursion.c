#include <stdio.h>
int fun(int a, int b)
{
    if ((b - a) > (a & b) && b > 7)
    {
        a = a + 2;
        a = a + 3;
        return fun(a + 1, b + 2) + 2 + a + fun(a,b);
    }
    return b - a + 1;
}
int main()
{
    int a = 3, b = 9;
    printf("%d", fun(a, b));
    return 0;
}