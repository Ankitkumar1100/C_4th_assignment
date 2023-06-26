#include <stdio.h> // Including the standard input/output library to use functions like printf and scanf

int main() { // Starting point of the program, where execution begins
   int day; // Declaring an integer variable named 'day' to store the weekday number

   printf("Enter weekday number (1-7): "); // Printing a string message asking the user to enter a weekday number
   scanf("%d", &day); // Reading the input weekday number from the user and storing it in the variable 'day'

   switch(day) { // Starting a switch statement to check the value of 'day'
      case 1: // Checking if 'day' is equal to 1
         printf("Monday\n"); // Printing the corresponding weekday name if the case is matched (Monday in this case)
         break; // Exiting the switch statement
      case 2: // Checking if 'day' is equal to 2
         printf("Tuesday\n"); // Printing the corresponding weekday name if the case is matched (Tuesday in this case)
         break; // Exiting the switch statement
      case 3: // Checking if 'day' is equal to 3
         printf("Wednesday\n"); // Printing the corresponding weekday name if the case is matched (Wednesday in this case)
         break; // Exiting the switch statement
      case 4: // Checking if 'day' is equal to 4
         printf("Thursday\n"); // Printing the corresponding weekday name if the case is matched (Thursday in this case)
         break; // Exiting the switch statement
      case 5: // Checking if 'day' is equal to 5
         printf("Friday\n"); // Printing the corresponding weekday name if the case is matched (Friday in this case)
         break; // Exiting the switch statement
      case 6: // Checking if 'day' is equal to 6
         printf("Saturday\n"); // Printing the corresponding weekday name if the case is matched (Saturday in this case)
         break; // Exiting the switch statement
      case 7: // Checking if 'day' is equal to 7
         printf("Sunday\n"); // Printing the corresponding weekday name if the case is matched (Sunday in this case)
         break; // Exiting the switch statement
      default: // Executed if none of the above cases match
         printf("Invalid input!\n"); // Printing an error message to indicate invalid input
   }

   return 0; // Returning 0 to indicate successful program execution
}
