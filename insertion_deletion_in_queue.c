#include <stdio.h>
#include <stdlib.h>

int R = -1, F = -1, N = 5;
int Q[5] = {1, 1, 1, 1, 1};

int insertion(int Element) {
    if (R >= N - 1) {  
        printf("Overflow\n");
        return -1;
    }
    R = R + 1;
    Q[R] = Element;
    if (F == -1) {  
        F = 0;
    }
    printf("Inserted %d into the queue.\n", Element);
    return Q[R];
}

int deletion() {
    if (F == -1) {  
        printf("Underflow\n");
        return -1;
    }

    int Element = Q[F];
    if (F == R) {  
        R = -1;
        F = -1;
    } else {
        F = F + 1;
    }
    printf("Deleted %d from the queue.\n", Element);
    return Element;
}


void display() {
    if (F == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = F; i <= R; i++) {
            printf("%d ", Q[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                insertion(element);
                break;

            case 2:
                deletion();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}