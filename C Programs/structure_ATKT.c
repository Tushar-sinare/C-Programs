#include <stdio.h>
#include <string.h>

struct Marksheet3
{

    int seatno;
    char name[50];
    char division[10];
    int totalmarks;
    float percentage;
    int marksobtained[100];
    int subjectCode[10];
    int result;
    char subname[10][50];
    char collegename[50];
    int outof;
};

int main()
{
    int i, sub , count=0;
    struct Marksheet3  stud;
    stud.outof = 0;
    stud.totalmarks = 0;
    stud.percentage = 0;
    
    fflush(stdin);
    printf("College Name: ");
    gets(stud.collegename);

    printf("Student Seat Number: ");
    scanf("%d", &stud.seatno);
    printf("Division: ");
    scanf("%s", stud.division);
    fflush(stdin);
    printf("Student Name: ");
    gets(stud.name);
    fflush(stdin);
    printf("Total Subject: ");
    scanf("%d", &sub);
    for (i = 0; i < sub; i++)
    {
      
        printf("Enter the Subject Code: ");
        scanf("%d", &stud.subjectCode[i]);
        printf("Enter the Subject Name: ");
        scanf("%s", stud.subname[i]);
        fflush(stdin);
        printf("Enter the Marks Obtained: ");
        scanf("%d", &stud.marksobtained[i]);
        
    }
    stud.outof = sub * 100;
    for (i = 0; i < sub; i++)
    {
        stud.totalmarks += stud.marksobtained[i];
        stud.percentage = stud.totalmarks / sub;
    }
    printf("\n\n");
    printf("\t\t\t\t **** CBSC EXAMINATION 2022 ****\n");

    printf(" Seat NO: %d \t\t", stud.seatno);

    printf("College Name: %s\n", stud.collegename);

    printf("Student Name: %s \t\t", stud.name);

    printf("Division: %s \n", stud.division);

    printf("----------------------------------------------------------------------------\n");
  
    printf("Subject Code\t\t");
    printf("Subject Name\t\t");
    printf("Marks Obtained \n");

    for (i = 0; i < sub; i++)
    {
       
        printf("%d\t\t\t\t", stud.subjectCode[i]);
        printf("%s\t\t\t", stud.subname[i]);
        printf("%d\n", stud.marksobtained[i]);
    }

    printf("\n\n");
    printf("Total Percentage: %.2f \t\t\t\t", stud.percentage);
    printf("Total Marks: %d\n", stud.totalmarks);
    count=0;
    for ( i = 0; i < sub ; i++)
    {
       if (stud.marksobtained[i]<35 && count<4)
       {
            count +=1;
       }
       
    }
    
    if (count < 3)
    {
        printf("RESULT: ATKT(%d)\t\t\t", count);
    }
    else if (stud.percentage>35)
    {
        printf("RESULT: PASS");
    }
    else
    {
        printf("RESULT: FAIL");
    }

    printf("Out of marks: %d\n", stud.outof);
    printf("------------------------------------ BEST OF LUCK -----------------------------------------");
    return 0;
}
