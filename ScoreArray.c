#include <stdio.h> // Including the standard input/output library to use functions like printf

int main() { // Starting point of the program, where execution begins
   int secured[5] = {85, 90, 92, 78, 95}; // Declaring and initializing an integer array named 'secured' with 5 elements
   
   int max_score = secured[0]; // Initializing the variable 'max_score' with the first element of the 'secured' array
   
   for(int i=1; i<5; i++) { // Starting a loop that iterates from i=1 to i<5 with i incrementing by 1 each iteration
      if(secured[i] > max_score) { // Checking if the element at index 'i' in the 'secured' array is greater than 'max_score'
         max_score = secured[i]; // If the current element is greater, updating 'max_score' with the current element
      }
   }
   
   printf("Maximum score in the list is: %d", max_score); // Printing the maximum score
   
   return 0; // Returning 0 to indicate successful program execution
}
