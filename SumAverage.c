#include <stdio.h>

int main() {
   int num, sum = 0;    //Declared and initialized a variable called "sum" to 0.
   float avg = 0;       // Initialised a float datatype variable called 'avg'.

   printf("Enter 10 numbers: "); //Using printf to take the input from user.

   for(int i = 0; i < 10; i++)   //Using a for loop to to cycle through the first 10 natural no.
   {
      scanf("%d", &num);   //storing input on address num.
      sum += num; //Adding the current value of i to the variable sum.
   }

   avg = (float)sum / 10;  //formula of a erage

   printf("Sum = %d\n", sum); //Printing sum using printf.
   printf("Average = %.2f", avg);   //Printing average using printf.

   return 0;   //return 0 to show the program has finished.
}
