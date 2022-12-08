#include<stdio.h>
int *reverse(int*);
int main()
{
    int num,*ans;
    printf("Enter a number: ");
    scanf("%d", &num);
    ans = reverse(&num);
    
    printf("Reverse of number is :%d", *ans);
}
    
    int *reverse(int n)
    {
        int rem,*rev;
        rev=(int*)malloc(sizeof(int));
        *rev=0;
        while (*n != 0)
        {
            rem = *n % 10;
            rev = *rev * 10 + rem;
            n = *n / 10;
        }
        
    }
    