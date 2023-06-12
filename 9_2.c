#include <stdio.h>

int main() {
   int arr[5] = {10, 20, 30, 40, 50};
   
   printf("Original array elements: ");
   for(int i=0; i<5; i++) {
      printf("%d ", arr[i]);
   }
   
   printf("\nArray elements after multiplying with 2: ");
   for(int i=0; i<5; i++) {
      arr[i] = arr[i] * 2;
      printf("%d ", arr[i]);
   }
   
   return 0;
}