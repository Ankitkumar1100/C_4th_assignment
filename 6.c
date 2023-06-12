#include <stdio.h>

int main() {
   int num1 = 0, num2 = 1, nextTerm = 0;
   int n;

   printf("Enter the number of terms: ");
   scanf("%d", &n);

   printf("Fibonacci Series: ");

   do {
      printf("%d ", num1);
      nextTerm = num1 + num2;
      num1 = num2;
      num2 = nextTerm;
      n--;
   } while(n > 0);

   return 0;
}

