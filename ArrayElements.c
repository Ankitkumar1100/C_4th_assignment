#include <stdio.h> // Including the standard input/output library to use functions like printf

int main() { // Starting point of the program, where execution begins
   int arr[5] = {10, 20, 30, 40, 50}; // Declaring and initializing an integer array named 'arr' with 5 elements
   
   printf("Array elements: "); // Printing a string message
   
   for(int i=0; i<5; i++) { // Starting a loop that iterates from i=0 to i<5 with i incrementing by 1 each iteration
      printf("%d ", arr[i]); // Printing the value at index 'i' of the array, followed by a space
   }
   
   return 0; // Returning 0 to indicate successful program execution
}
