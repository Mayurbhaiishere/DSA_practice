#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* LPTR; // Left pointer
    struct Node* RPTR; // Right pointer
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
        } else {+
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

void PreOrder(struct Node* head) {
    if (head == NULL) {
        return;
    }
    printf("%d -> ", head->data);
    if (head->LPTR != NULL){
        PreOrder(head->LPTR);
    }
    if (head->RPTR != NULL){
        PreOrder(head->RPTR);
    }
    
}

void InOrder(struct Node* head) {
    if (head == NULL) {
        return;
    }
    
    if (head->LPTR != NULL){
        InOrder(head->LPTR);
    }
    printf("%d -> ", head->data);
    if (head->RPTR != NULL){
        InOrder(head->RPTR);
    } 
    
}
void PostOrder(struct Node* head) {
    if (head == NULL) {
        return;
    }
    
    if (head->LPTR != NULL){
        PostOrder(head->LPTR);
    }
    if (head->RPTR != NULL){
        PostOrder(head->RPTR);
    } 
    printf("%d -> ", head->data);
}


int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 4);
    insertAtEnd(&head, 33);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 11);
    //insertAtEnd(&head, 7);
    //insertAtEnd(&head, 9);
    //insertAtEnd(&head, 8);
    //insertAtEnd(&head, 6);
    //insertAtEnd(&head, 5);

    printf("PreOrder Traversal:\n");
    PreOrder(head);
    printf("\n");
    printf("PreOrder Traversal:\n");
    InOrder(head);
    printf("\n");
    printf("PreOrder Traversal:\n");
    PostOrder(head);
    printf("\n");



    return 0;
}


