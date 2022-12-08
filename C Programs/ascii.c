#include <stdio.h>
void str();
char c;
int main()
{

    printf("Enter a charcter :");
    scanf("%c", &c);
    str();
}
void str()
{

    printf("ASCII value of %c=%d", c, c);
}
