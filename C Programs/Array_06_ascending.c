#include <stdio.h>
int main()
{
    int i, j, num, temp;
    int data[100];
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &data[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = j+1; j < num; j++)
        {
            while (data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("%d", data[i]);
    }
    return 0;
}
