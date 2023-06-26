#include <stdio.h>

int main() {
   int num, product; // Initalising two variable num and product.
   //Using nested for loops to generate multiplication table.
   for(int i = 1; i <= 10; i++)  //Using outer for loop to cycle through first 10 natural numbers.
   {
      for(int j = 1; j <= 10; j++)  //inner loop using to cycle through first 10 natural numbers.
      {
         product = i * j;  //The product of variable i and j will store in variable product.
         printf("%d ", product); //Using printf statement to print the product.
      }
      printf("\n");
   }

   return 0;   //Return 0 to show that the program is finished.
}
