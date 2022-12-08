#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a lower charcter :");
    scanf("%c",&ch);
    ch=ch-32;
    printf("The lower to upper value :%c",ch,ch);
    return(0);
    
}