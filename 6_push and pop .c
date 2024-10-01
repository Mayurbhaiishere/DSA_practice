#include <stdio.h>

#define SIZE 5  // Define the size of the stack

int top = -1; 
int push(int S[], int item);
int pop(int S[]);

int main() {
    int item, s[SIZE], hi;

    while (1) {
        printf("1. PUSH\n2. POP\n3. EXIT\n");  // Added option to exit the loop
        printf("Enter your choice: ");
        scanf("%d", &hi);

        if (hi == 1) {
            printf("Enter Item: ");
            scanf("%d", &item);
            push(s, item);
        } else if (hi == 2) {
            pop(s);
        } else if (hi == 3) {
            break;  // Exit the loop if the user chooses option 3
        } else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}

int push(int s[], int item) {
    if (top >= SIZE - 1) { 
        printf("Stack Overflow\n");
        return -1;
    } else {
        top++;
        s[top] = item;
        printf("Item pushed: %d\n", item);
        return 0;
    }
}

int pop(int s[]) {
    if (top < 0) { 
        printf("Stack Underflow\n");
        return -1;
    } else {
        int item = s[top];
        top--;
        printf("Item popped: %d\n", item);
        return item;
    }
}