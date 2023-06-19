#include <stdio.h> // Including the standard input/output library to use functions like printf

int main() { // Starting point of the program, where execution begins
   int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // Declaring and initializing a 2D integer array named 'matrix' with size 3x3
   
   printf("Matrix contents:\n"); // Printing a string message to indicate the matrix contents
   
   for(int i=0; i<3; i++) { // Starting an outer loop that iterates from i=0 to i<3 with i incrementing by 1 each iteration
      for(int j=0; j<3; j++) { // Starting an inner loop that iterates from j=0 to j<3 with j incrementing by 1 each iteration
         printf("%d ", matrix[i][j]); // Printing the element at row i and column j of the matrix, followed by a space
      }
      printf("\n"); // Printing a newline character to move to the next row in the matrix
   }
   
   return 0; // Returning 0 to indicate successful program execution
}
