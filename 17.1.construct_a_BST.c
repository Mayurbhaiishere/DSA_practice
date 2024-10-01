#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* LPTR;
    struct Node* RPTR;
};

void insertAtEnd(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->LPTR = NULL;
    new_node->RPTR = NULL;

    // If the tree is empty, set new node as the head
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node* last = *head;
    struct Node* parent = NULL;

    while (last != NULL) {
        parent = last;
        if (data < last->data) {
            last = last->LPTR; // Move to left child
        } else if (data > last->data) {
            last = last->RPTR; // Move to right child
        } else {
            printf("Invalid data (duplicate)\n");
            free(new_node); // Free memory if not inserting
            return;
        }
    }

    // Insert the new node in the correct position
    if (data < parent->data) {
        parent->LPTR = new_node;
    } else {
        parent->RPTR = new_node;
    }
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    

    return 0;
}
