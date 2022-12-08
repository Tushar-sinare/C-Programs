#include <stdio.h>
int main()
{
    int i, name[10], num;
    printf("Enter a character size: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        fflush(stdin);
        printf("Enter a  character: ");
        scanf("%c", &name[i]);
    }
    name[i] = '\0';
    printf("%s", name);

    for (i = 0; i < num; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}