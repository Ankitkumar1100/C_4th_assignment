#include <stdio.h>

int main() {
   int num, sum = 0;
   float avg;

   printf("Enter 10 numbers: ");

   for(int i = 0; i < 10; i++) {
      scanf("%d", &num);
      sum += num;
   }

   avg = (float)sum / 10;

   printf("Sum = %d\n", sum);
   printf("Average = %.2f", avg);

   return 0;
}