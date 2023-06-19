#include <stdio.h> // Including the standard input/output library to use functions like printf and scanf

int main() { // Starting point of the program, where execution begins
   int roll[5] = {101, 102, 103, 104, 105}; // Declaring and initializing an integer array named 'roll' with 5 elements
   int search_roll, found = 0; // Declaring integer variables 'search_roll' to store the roll number to search and 'found' to keep track of whether the roll number is found or not
   
   printf("Enter roll number to search: "); // Printing a string message asking the user to enter the roll number to search
   scanf("%d", &search_roll); // Reading the input roll number from the user and storing it in the variable 'search_roll'
   
   for(int i = 0; i < 5; i++) { // Starting a loop that iterates from i=0 to i<5 with i incrementing by 1 each iteration
      if(roll[i] == search_roll) { // Checking if the roll number at index 'i' in the array 'roll' matches the search roll number
         found = 1; // Setting 'found' to 1 to indicate that the roll number is found
         break; // Exiting the loop since the roll number is found
      }
   }
   
   if(found == 1) // Checking if the roll number is found
      printf("Roll number %d found in the class", search_roll); // Printing a message indicating that the roll number is found
   else
      printf("Roll number %d not found in the class", search_roll); // Printing a message indicating that the roll number is not found
   
   return 0; // Returning 0 to indicate successful program execution
}
