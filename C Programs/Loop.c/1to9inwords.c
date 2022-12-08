#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number from 1 to 9 :\n");
    scanf("%d", &day);
    switch(day)
    {
    case 1:
        printf("One\n");
        break;

    case 2:
        printf("Two\n");
        break;

    case 3: 
        printf("Three\n");
        break;

    case 4:
        printf("Four\n");
        break;

    case 5:
        printf("Five\n");
        break;

    case 6:
        printf("six\n");
        break;

    case 7:
        printf("seven\n");
        break;

        case 8:
        printf("Eight\n");
        break;

        case 9:
        printf("Nine\n");
        break;

    default:
        printf("Please enter a valid number between 1 to 9\n");
        break;
    }
}