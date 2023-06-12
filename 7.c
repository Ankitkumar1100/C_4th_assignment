#include <stdio.h>

int main() {
   int i = 2, j, flag;

   printf("Prime numbers between 1 to 50 are: ");

   while(i <= 50) {
      flag = 0;
      for(j=2; j<=i/2; j++) {
         if(i%j == 0) {
            flag = 1;
            break;
         }
      }
      if(flag == 0)
         printf("%d ", i);
      i++;
   }

   return 0;
}