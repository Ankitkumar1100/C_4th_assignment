#include <stdio.h>

int main() {
   int choice, num1, num2;
   
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);
   
   printf("Choose an operation:\n");
   printf("1. Addition\n");
   printf("2. Subtraction\n");
   printf("3. Multiplication\n");
   printf("4. Division\n");
   printf("5. Modulation\n");
   scanf("%d", &choice);
   
   switch(choice) {
      case 1:
         printf("Result: %d", num1+num2);
         break;
      case 2:
         printf("Result: %d", num1-num2);
         break;
      case 3:
         printf("Result: %d", num1*num2);
         break;
      case 4:
         if(num2 == 0)
            printf("Cannot divide by zero");
         else
            printf("Result: %d", num1/num2);
         break;
      case 5:
         printf("Result: %d", num1%num2);
         break;
      default:
         printf("Invalid choice");
   }
   
   return 0;
}