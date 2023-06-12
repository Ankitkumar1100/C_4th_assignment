#include <stdio.h>

int main() {
   int num, product;

   for(int i = 1; i <= 10; i++) {
      for(int j = 1; j <= 10; j++) {
         product = i * j;
         printf("%d ", product);
      }
      printf("\n");
   }

   return 0;
}