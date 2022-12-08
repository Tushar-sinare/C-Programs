#include <stdio.h>
int main()
{
    int temp, num, i, j;
    char name[40];
    printf("Enter a size of character:");
    scanf("%d", &num);
    printf("Enter a string: ");

    for (i = 0; i < num; i++)
    {
        fflush(stdin);
        scanf("%c", &name[i]);
    }
    name[i] = '\0';
    printf("%s\n", name);

    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        
        {
            while ((name[i]) > (name[j]))
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    printf("\n%s", name);
    return 0;
}