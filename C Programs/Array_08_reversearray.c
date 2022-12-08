#include <stdio.h>
int main()
{
    int i, j, num, temp;
    int data[100];
    printf("Enter the array size: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &data[i]);
    }
    printf("\n The Array element: ");
    for (i = 0; i < num; i++)
    {
        printf("%d", data[i]);
    }
    printf("\n Reverse array is: ");
    for (i = num - 1; i >= 0; i--)
    {
        printf("%d", data[i]);
    }
    for (i = 0; i < num / 2; i++)
    {
        temp = data[i];
        data[i] = data[num - i - 1];
        data[num - i - 1] = temp;
    }
    for (i = 0; i < num; i++)
    {
        printf("%d", data[i]);
    }

    return 0;
}