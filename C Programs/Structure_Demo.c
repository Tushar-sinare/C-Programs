#include <stdio.h>
#include <string.h>
struct student 
{
    int rollno;
    char name[10];
    char subjectname[6][10];
    int marks[6];
};

int main()
{
    float percent;
    struct student s1;
    int i, total = 0, flag = 1;
    printf("Enter roll no: ");
    scanf("%d", &s1.rollno);
    printf("Enter a name:");
    scanf("%s", s1.name);
    
    for (i = 0; i < 6; i++)
    {
        fflush(stdin);
        printf("Enter a subject: %d", i++);
        scanf("%s", s1.subjectname[i]);
        printf("Enter marks: %d", i+1);
        scanf("%d", &s1.marks[i]);
    }
    printf("\n---------- RESULT ----------\n");
    printf("\n Roll No: %d", s1.rollno);
    printf("\n Name: %s", s1.name);
    printf("\n");

    for (i = 0; i < 6; i++)
    {
        printf("%s\t", s1.subjectname[i]);
    }
    printf("\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\t", s1.marks[i]);
        total = total + s1.marks[i];
    }
    if (s1.marks[i] < 40)
         
    {
        flag = 0;
        percent = total / 6.0;
    }
    printf("\n total: %d", total);
    printf("\n percentage: %2f", percent);

    if (flag == 1)
    {
        printf("Result: PASS");
    }
    else
    {
        printf("Result: FAIL");
    }
    printf("\n---------- BEST OF LUCK ---------\n");
    return 0;

}