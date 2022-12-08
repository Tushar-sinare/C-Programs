// #include<stdio.h>
// int main()
// {
//     int i, j, rows, columns, a[10][10];
//     int sum=0;

//     printf("\n Please Enter Number of rows :  ");
//     scanf("%d ", &i);
//     printf("\n Enter Number of columns :  ");
//     scanf("%d ", &j);

//     for (i = 0; i < rows; i++)
//     {
//         for (j = 0; j < columns; j++)
//         {
//             printf("Enter the element", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i< rows ; i++)
//     {
//         for (j = 0; j < columns; j++)
//         {
//             if (i == j)
//             {
//                 sum = sum + a[i][j];
//             }
        
//         printf("The sum of  diagonal of all elements:", sum);
//         }
//         return 0;
//     }
//     }
#include<stdio.h>
int main()
{

   int i, j, matrix[10][10], row, col;
   int sum = 0;

   printf("\nEnter the number of Rows : ");
   scanf("%d", &row);
 
   printf("\nEnter the number of Columns : ");
   scanf("%d", &col);
 
   //Accept the Elements in m x n Matrix
   for (i = 0; i < row; i++) 
   {
      for (j = 0; j < col; j++) 
	  {
         printf("\nEnter the Element a[%d][%d] : ", i, j);
         scanf("%d", &matrix[i][j]);
      }
   }
 
  //Addition of all Diagonal Elements
  for (i = 0; i < row; i++) 
  {
   for (j = 0; j < col; j++) 
    {
     if (i == j)
     sum = sum + matrix[i][j];
    }
   }
 
   //Print out the Result
   printf("\nSum of Diagonal Elements in Matrix is: %d", sum);
return 0;
}