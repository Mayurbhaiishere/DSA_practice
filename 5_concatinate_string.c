#include <stdio.h>

int main() {
    int no = 0, index = 0;

    printf("Enter the number of elements you have to add to each array: ");
    scanf("%d", &no);

    char array1[no + 1], array2[no + 1], final[(no * 2) + 1];  // Adding 1 for null-terminators

    printf("Enter the elements of array1:\n");
    for (index = 0; index < no; index++) {
        scanf(" %c", &array1[index]);   
    }
    array1[no] = '\0';  
    printf("Enter the elements of array2:\n");
    for (index = 0; index < no; index++) {
        scanf(" %c", &array2[index]);   
    }
    array2[no] = '\0';   

    // Concatenate array1 and array2 into final
    for (index = 0; index < no; index++) {
        final[index] = array1[index];
    }
    for (index = 0; index < no; index++) {
        final[no + index] = array2[index];
    }
    final[no * 2] = '\0';  // Null-terminate the final string

    printf("Concatenated string is: %s\n", final);

    return 0;
}