#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a upper case charcter :");
    scanf("%c",&ch);
    ch=ch+32;
    printf("The upper to lower character is :%c",ch,ch);
    
    return(0);

}