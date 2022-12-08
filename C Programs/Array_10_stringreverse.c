#include <stdio.h>
int main()
{
    int i, j, temp, num;
    char name[50];
    printf("Enter a string: ");
    
    for ( i = 0; i < 5; i++)
    {
        fflush(stdin);
        scanf("%c", &name[i]);
    }
    
    for (i = 0; name[i] != '\0'; i++)
    {
        num = i + 1;
    }
    for (i = 0; i < num / 2; i++)
    {
        temp = name[i];
        name[i] = name[num - i - 1];
        name[num - i - 1] = temp;
       
    }
    
        printf("%s" , name);
    return 0;
}