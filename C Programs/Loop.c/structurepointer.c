#include <stdio.h>
#include <string.h>

struct Marksheet 
// In this program variable pointer is declared
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
}*stud,stud1;

int main()
{
    int i, sub;
    stud=&stud1;
    stud1.outof = 0;
    stud1.totalmarks = 0;
    stud1.percentage = 0;
    
    fflush(stdin);
    printf("College Name: ");
    gets(stud-> collegename);

    printf("Student Seat Number: ");
    scanf("%d", &stud->seatno);
    printf("Division: ");
    scanf("%s", stud->division);
    fflush(stdin);
    printf("Student Name: ");
    gets(stud->name);
    fflush(stdin);
    printf("Total Subject: ");
    scanf("%d", &sub);
    for (i = 0; i < sub; i++)
    {
      
        printf("Enter the Subject Code: ");
        scanf("%d", &stud->subjectCode[i]);
        printf("Enter the Subject Name: ");
        scanf("%s", stud->subname[i]);
        fflush(stdin);
        printf("Enter the Marks Obtained: ");
        scanf("%d", &stud->marksobtained[i]);
        
    }
    stud->outof = sub * 100;
    for (i = 0; i < sub; i++)
    {
        stud->totalmarks += stud->marksobtained[i];
        stud->percentage = stud->totalmarks / sub;
    }
    printf("\n\n");
    printf("\t\t\t\t **** CBSC EXAMINATION 2022 ****\n");

    printf(" Seat NO: %d \t\t", stud->seatno);

    printf("College Name: %s\n", stud->collegename);

    printf("Student Name: %s \t\t", stud->name);

    printf("Division: %s \n", stud->division);

    printf("----------------------------------------------------------------------------\n");
  
    printf("Subject Code\t\t");
    printf("Subject Name\t\t");
    printf("Marks Obtained \n");

    for (i = 0; i < sub; i++)
    {
       
        printf("%d\t\t\t\t", stud->subjectCode[i]);
        printf("%s\t\t\t", stud->subname[i]);
        printf("%d\n", stud->marksobtained[i]);
    }

    printf("\n\n");
    printf("Total Percentage: %.2f \t\t\t\t", stud->percentage);
    printf("Total Marks: %d\n", stud->totalmarks);
    
    if (stud->percentage < 40)
    {
        printf("RESULT: PASS\t\t\t\t\t\t");
    }
    else
    {
        printf("RESULT: FAIL\t\t\t\t\t\t");
    }

    printf("Out of marks: %d\n", stud->outof);
    printf("------------------------------------ BEST OF LUCK -----------------------------------------");
    return 0;
}
