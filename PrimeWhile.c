#include <stdio.h>

int main() {
   int i = 2, j, flag;  //Intitalising i,j flag variable and declaring i = 2.

   printf("Prime no. b/w 1 to 50 are: ");//Printing statement.
   //Using while loop to find and print prime numbers between 1 and 50.
   while(i <= 50) {
      flag = 0;   //Flag is set to 0.It is used to determine that the no is prime or not.
   //There is a nested for loop. This loop cycles from 2 to i/2 and checks if i  is divisible evenly by any number in that range.
      for(j=2; j<=i/2; j++) {
         if(i%j == 0) {
            flag = 1;
            break;   //if condition is fulfilled it breaks the program.
         }
      }
      if(flag == 0)
         printf("%d ", i);
      i++;
   }

   return 0;   //return 0 to indicate that the program is finished.
}
