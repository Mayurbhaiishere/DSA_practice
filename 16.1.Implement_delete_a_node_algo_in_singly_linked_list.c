#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    
    last->next = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}


void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {   
        printf("List is empty and underflow\n");
        return;
    }

    struct Node* last = *head;

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        *head = (*head)->next;
        free(last);
    }
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("Initial list:\n");
    printList(head);

    // Example of deleting a node from the beginning
    deleteAtBeginning(&head);
    printf("After deleting the first node:\n");
    printList(head);

    return 0;
}
