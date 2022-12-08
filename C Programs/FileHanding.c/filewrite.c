// Writing from a file //
/*#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("filewrite.txt", "w");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);

    fclose(fptr);
    return 0;
}*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("filewrite.txt", "w");
    char ch;
    fprintf(fptr, "%c", 'M');     //---If we write any data in the file that data was overwrite
    fprintf(fptr, "%c", 'A');    //---And if we use the append mode at that the after pervious data the new data is added
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);
    return 0;
}