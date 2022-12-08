// How to pass a one D array to function
/*#include<stdio.h>
void display (int []);
int main()
{
int x[10], i;
printf("Enter the elements of array: ");
for ( i = 0; i < 10; i++)
{
    scanf("%d", &x[i]);

}
// only comes array name not its size
display(x);
}
void display( int p[])
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d", p[i]);
    }

}
*/

/*#include <stdio.h>
void display();
int num[10];
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }
    display();
}
void display()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d is even number\n", num[i]);
        }
        else
        {
            printf("%d is odd number\n", num[i]);
        }
    }
}
*/

// Program for check the number is palindrome

#include <stdio.h>
void palin();
int main()

{
    int i, num;
    int data[10];
    printf("Enter a array size: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter a  number: ");
        scanf("%d", &data[i]);
        palin();
    }

    void palin()
    {
        
        for (i = 0; i < num; i++)
        {
            int sum, rem, no, no1;
            no = data[i];
            sum = 0;
            no1 = no;
            while (no1 > 0)
            {
                rem = no1 % 10;
                sum = rem + sum * 10;
                no1 = no1 / 10;
            }
            if (sum == no)
            {
                printf("The palindrome number is %d\n", no);
            }
            else
            {
                printf("The  Not-palindrome number is %d\n", no);
            }
        }
    }
}