
#include<stdio.h>
int main()
{
    // int marks[4];
    // printf("Enter the marks of student 1: ");
    // scanf("%d",&marks[0]);
    //  printf("Enter the marks of student 2: ");
    // scanf("%d",&marks[1]);
    //  printf("Enter the marks of student 3: ");
    // scanf("%d",&marks[2]);
    //  printf("Enter the marks of student 4: ");
    // scanf("%d",&marks[3]);

    // printf("The final marks is %d %d %d %d ", marks[0],marks[1],marks[2],marks[3]);
    int a[5],i;
    for ( i = 0; i < 5; i++)
    {
       printf("Enter a number: ");
       scanf("%d", &a);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", a[5]);

    }
    
    return 0;
}