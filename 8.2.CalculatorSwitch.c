#include <stdio.h> // Including the standard input/output library to use functions like printf and scanf

int main() { // Starting point of the program, where execution begins
   int choice, num1, num2; // Declaring integer variables for choice, num1, and num2
   
   printf("Enter first number: "); // Printing a string message asking for the first number
   scanf("%d", &num1); // Reading the input from the user and storing it in the variable num1
   printf("Enter second number: "); // Printing a string message asking for the second number
   scanf("%d", &num2); // Reading the input from the user and storing it in the variable num2
   
   printf("Choose an operation:\n"); // Printing a string message asking the user to choose an operation
   printf("1. Addition\n"); // Printing the options for addition
   printf("2. Subtraction\n"); // Printing the options for subtraction
   printf("3. Multiplication\n"); // Printing the options for multiplication
   printf("4. Division\n"); // Printing the options for division
   printf("5. Modulation\n"); // Printing the options for modulus
   scanf("%d", &choice); // Reading the input from the user and storing it in the variable choice
   
   switch(choice) { // Starting a switch statement based on the value of choice
      case 1: // If choice is 1
         printf("Result: %d", num1+num2); // Printing the result of addition of num1 and num2
         break; // Exiting the switch statement
      case 2: // If choice is 2
         printf("Result: %d", num1-num2); // Printing the result of subtraction of num2 from num1
         break; // Exiting the switch statement
      case 3: // If choice is 3
         printf("Result: %d", num1*num2); // Printing the result of multiplication of num1 and num2
         break; // Exiting the switch statement
      case 4: // If choice is 4
         if(num2 == 0) // Checking if num2 is zero
            printf("Cannot divide by zero"); // Printing an error message if num2 is zero
         else
            printf("Result: %d", num1/num2); // Printing the result of division of num1 by num2
         break; // Exiting the switch statement
      case 5: // If choice is 5
         printf("Result: %d", num1%num2);
   }
