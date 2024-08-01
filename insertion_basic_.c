#include <stdio.h>

int main() {
    int a[5] = {5, 8, 10, 30, 25}; 
    int i, j[6];
    int insertion = 20, index = 3;

   
  for(i = 0; i < index; i++) {
     j[i] = a[i];
   }

    
    for(i = 5; i > index; i--) {
        j[i] = a[i - 1];
    }
    j[index] = insertion;

   
    printf("Printing the data:\n");
    for(i = 0; i < 6; i++) {
        printf("%d  ", j[i]);
    }
    printf("\n");

    return 0;
}