#include <stdio.h>

int main() {
   int rows;//Initialized variable rows.

   printf("Enter the no. of rows: ");//Taking input from the user.
   scanf("%d", &rows);//Ot reads the input and store it in rows.
//Using nested for loops to make pattern like pyramid with numbers.
   for(int i = 1; i <= rows; i++)// The outer loop cycle from 1 to the user input values.
   {
      for(int j = 1; j <= rows-i; j++)//The inner for loop prints the necessary number of gaps before displaying the numbers in the current row.
      {
         printf(" ");//It prints gaps
      }
      for(int k = 1; k <= i; k++)//This inner for loop prints the numbers in the current row, with the value of "i" being printed "i" no. of times.
      {
         printf("%d ", i);
      }
      printf("\n");//After each row is printed, a newline character is printed to start a new row.
   }

   return 0;//return 0 to indicate that the program has finished.
}
