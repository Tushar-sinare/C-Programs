#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct Marksheet 
// In this program member pointer is declared
{

    int *seatno;
    char *name;
    char *division;
    int *totalmarks;
    float *percentage;
    int *marksobtained;
    int *subjectCode;
    int *result;
    char *subname[6];
    char *collegename;
    int *outof;
};

int main()
{
    struct Marksheet  stud1;
    int sub;
    stud1.seatno=(int*)malloc(sizeof(int));
    stud1.name=(char*)malloc(sizeof(char)*10);
    stud1.division=(char*)malloc(sizeof(char)*5);
    stud1.totalmarks=(int*)malloc(sizeof(int));
    stud1.percentage=(float*)malloc(sizeof(float));
    stud1.marksobtained=(int*)malloc(sizeof(int));
    stud1.subjectCode=(int*)malloc(sizeof(int));
    stud1.result=(int*)malloc(sizeof(int));
   for (int i = 0; i < 6; i++)
   {
     stud1.subname[i]=(char*)malloc(sizeof(char)*10);
   }
   
    stud1.collegename=(char*)malloc(sizeof(char)*50);
    stud1.outof=(int*)malloc(sizeof(int));
    
   *stud1.outof = 0;
   *stud1.totalmarks = 0;
   *stud1.percentage = 0;
    
   
    printf("College Name: ");
    scanf("%s",stud1.collegename);
    fflush(stdin);
    printf("Student Seat Number: ");
    scanf("%d", stud1.seatno);
    fflush(stdin);
    printf("Division: ");
    scanf("%s", stud1.division);
    fflush(stdin);
    printf("Student Name: ");
    scanf("%s",stud1.name);
    fflush(stdin);
    printf("Total Subject: ");
    scanf("%d", &sub);
    for (int i = 0; i < sub; i++)
    {
      
        printf("Enter the Subject Code: ");
        scanf("%d", stud1.subjectCode + i);
        printf("Enter the Subject Name: ");
        scanf("%s", stud1.subname[i]);
        fflush(stdin);
        printf("Enter the Marks Obtained: ");
        scanf("%d", stud1.marksobtained + i);
        
    }
    *stud1.outof = sub * 100;
    for (int i = 0; i < sub; i++)
    {
        *(stud1.totalmarks) += *(stud1.marksobtained + i);
        *(stud1.percentage) = *(stud1.totalmarks)/ sub;
    }

    printf("\n\n");
    printf("\t\t\t\t **** CBSC EXAMINATION 2022 ****\n");

    printf(" Seat NO: %d \t\t", *stud1.seatno);

    printf("College Name: %s\n", stud1.collegename);

    printf("Student Name: %s \t\t", stud1.name);

    printf("Division: %s \n", stud1.division);

    printf("----------------------------------------------------------------------------\n");
  
    printf("Subject Code\t\t");
    printf("Subject Name\t\t");
    printf("Marks Obtained \n");

    for (int i = 0; i < sub; i++)
    {
       
        printf("%d\t\t\t\t", *(stud1.subjectCode +i));
        printf("%s\t\t\t", stud1.subname[i]);
        printf("%d\n", *(stud1.marksobtained +i));
        fflush(stdin);
    }

    printf("\n\n");
    printf("Total Percentage: %.2f \t\t\t\t", *stud1.percentage);
    printf("Total Marks: %d\n", *stud1.totalmarks);
    
    if (*stud1.percentage>35)
    {
        printf("RESULT: PASS\t\t\t\t\t\t");
    }
    else
    {
        printf("RESULT: FAIL\t\t\t\t\t\t");
    }

    printf("Out of marks: %d\n", *stud1.outof);
    printf("------------------------------------ BEST OF LUCK -----------------------------------------");
    return 0;
}
