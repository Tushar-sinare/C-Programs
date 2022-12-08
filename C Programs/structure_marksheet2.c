#include <stdio.h>
#include <string.h>
struct marksheet2
{
    int seatno;
    char name[50];
    char division[10];
    int totalmarks;
    float percentage;
    int marksobtained[100];
    int subjectcode[10];
    int result;
    char subname[10][50];
    char collegename[50];
    int outof;
};

int main()
{
    struct marksheet2 stud[100];
    int i, j,n, sub;
    printf("Enter a number of student details: ");
    scanf("%d",&n);
    for (j = 0; j < n; j++)
    {
        stud[j].outof = 0;
        stud[j].totalmarks = 0;
        stud[j].percentage = 0;
      
    fflush(stdin);
    printf("College Name: ");
    gets(stud[j].collegename);
    printf("Student seat no: ");
    scanf("%d", &stud[j].seatno);
    printf("Division: ");
    scanf("%s", stud[j].division);
    fflush(stdin);
    printf("Student Name: ");
    gets(stud[j].name);
    fflush(stdin);
    printf("Total Subject: ");
    scanf("%d", &sub);

    for (i = 0; i < sub; i++)
    {
        printf("Enter the Subject Code: ");
        scanf("%d", &stud[j].subjectcode[i]);
        printf("Enter the Subject Name: ");
        scanf("%s", stud[j].subname[i]);
        fflush(stdin);
        printf("Enter the Marks Obtained: ");
        scanf("%d", &stud[j].marksobtained[i]);
    }

    stud[j].outof = sub * 100;
    for (i = 0; i < sub; i++)
    {
        stud[j].totalmarks += stud[j].marksobtained[i];
        stud[j].percentage = stud[j].totalmarks / sub;
    }
    }
    for ( j = 0; j < n; j++)
    {
        
    
    
    printf("\n\n");
    printf("\t\t\t\t **** CBSC EXAMINATION 2022 ****\n");

    printf("Seat NO: %d \t\t", stud[j].seatno);

    printf("College Name: %s\n", stud[j].collegename);

    printf("Student Name: %s \t\t", stud[j].name);

    printf("Division: %s \n", stud[j].division);

    printf("----------------------------------------------------------------------------\n");

    printf("Subject Code\t\t");
    printf("Subject Name\t\t");
    printf("Marks Obtained \n");

    for (i = 0; i < sub; i++)
    {
        printf("%d\t\t\t\t", stud[j].subjectcode[i]);
        printf("%s\t\t\t", stud[j].subname[i]);
        printf("%d\n", stud[j].marksobtained[i]);
    }

    printf("\n\n"); 
    printf("Total Percentage: %.2f \t\t\t\t", stud[j].percentage);
    printf("Total Marks: %d\n", stud[j].totalmarks);

    if (stud[j].percentage > 35)
    {
        printf("RESULT : PASS");
    }
    else
    {
        printf("RESULT : FAIL\t\t\t");
    }
    fflush(stdin);
    printf("Out of marks: %d\n",stud[j].outof);
    printf("------------------------------------ BEST OF LUCK -----------------------------------------");
    }
    return 0;
}