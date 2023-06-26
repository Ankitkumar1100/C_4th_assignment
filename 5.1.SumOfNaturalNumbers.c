#include <stdio.h>

int main() {
      int sum = 0;   //Declare and initialize a variable called "sum" to 0.

      for(int i = 1; i <= 10; i++)  //Use a for loop to loop through the initial 10 natural numbers.
            //The loop begins with i = 1 and continues until the value of i is no longer less than or equal to 10.
      {
      sum += i;   //In the loop, increase the variable sum by the current value of i.
      }

      printf("Sum of first 10 natural numbers: %d", sum);   //Printing out the result using printf.

      return 0;   //return 0 to show that the programme has finished.
}

