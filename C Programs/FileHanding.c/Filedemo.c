// Reading from a file
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("filehandlingdemo.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch); // ------- Address of the variable------//
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);

    fclose(fptr);
    return 0;
}

