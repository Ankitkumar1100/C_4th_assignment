#include <stdio.h>

int main() {
   int num1 = 0, num2 = 1, nextdigit = 0;  //Initialising and declaring 3 variables.
   int n;   //Initalising a variable n.

   printf("Enter the no. of terms: "); //Taking input from the user.
   scanf("%d", &n);  // It reads the input and stores it in variable n.

   printf("Fibonacci Series: "); //printing statement 
   //Using do while statement to print the fibonacci series.
   do {
      printf("%d ", num1); //Printing the cirrent value of num1 using printf statement.
      nextdigit = num1 + num2; //Adding num1 and num2 and storing it in nextdigit.
      num1 = num2;   //The values of num1 and num2 is updated num1 is assigned the value of num2.
      num2 = nextdigit;  //numè is assigned the value of nextdigit.
      n--;  //This loop also decreases the value of n by 1 with each cycle busing n--.
   } while(n > 0);   //Keep looping until n > 0.

   return 0;   //return 0 to indicate that the program is finished.
}

