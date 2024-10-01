#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

int insertAtAddress(struct Node** first, int data, struct Node* ptr) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Not enough memory!\n");
        return -1;
    }

    newNode->data = data;
    newNode->link = NULL;

    if (*first == NULL) {
        *first = newNode;
        return 0;
    }

    if (ptr == *first || ptr == *first) {
        newNode->link = *first;
        *first = newNode;
        return 0;
    }

    // Case 3: Insert after the specified node
    struct Node* current = *first;
    while (current-> link != NULL && current != ptr) {
        current = current->link;
    }

    if (current == NULL) {
        // If ptr is not found, insert at the end
        struct Node* last = *first;
        while (last->link != NULL) {
            last = last->link;
        }
        last->link = newNode;
    } else {
        // Insert after the specified node
        newNode->link = current->link;
        current->link = newNode;
    }

    return 0;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    struct Node* first = NULL;
    struct Node* firstNode = NULL;
    struct Node* secondNode = NULL;

    // Adding nodes to the list
    insertAtAddress(&first, 10,NULL);
    insertAtAddress(&first,20, firstNode);  
    insertAtAddress(&first, 30, secondNode); 
    insertAtAddress(&first, 25,NULL); 

    printList(first);

    return 0;
}
