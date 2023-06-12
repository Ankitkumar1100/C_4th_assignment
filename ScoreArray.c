#include <stdio.h>

int main() {
   int secured[5] = {85, 90, 92, 78, 95};
   int max_score = secured[0];
   
   for(int i=1; i<5; i++) {
      if(secured[i] > max_score) {
         max_score = secured[i];
      }
   }
   
   printf("Maximum score in the list is: %d", max_score);
   
   return 0;
}