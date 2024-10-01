#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};


int insertBefore(struct Node** first, int data ) {
    
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

    struct Node* pred = NULL;
    struct Node* save = *first;
    while (save != NULL) {
        pred = save;
        save = save->link;
    }

    newNode->link = *first;
    *first = newNode;

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

    printf("Original list: ");
    printList(first);

    
    insertBefore(&first, 15);
    insertBefore(&first, 16);
    insertBefore(&first, 17);

    printf("Updated list: ");
    printList(first);

    return 0;
}