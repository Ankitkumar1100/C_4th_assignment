#include <stdio.h>

int main() {
   int roll[5] = {101, 102, 103, 104, 105};
   int search_roll, found=0;
   
   printf("Enter roll number to search: ");
   scanf("%d", &search_roll);
   
   for(int i=0; i<5; i++) {
      if(roll[i] == search_roll) {
         found = 1;
         break;
      }
   }
   
   if(found == 1)
      printf("Roll number %d found in the class", search_roll);
   else
      printf("Roll number %d not found in the class", search_roll);
   
   return 0;
}