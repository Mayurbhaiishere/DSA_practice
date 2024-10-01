#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

int insertAtEnd(struct Node** first, int data ) {
   
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

    
    struct Node* last = *first;
    while (last->link != NULL) {
        last = last->link;
    }

   
    last->link = newNode;
    
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
    
    insertAtEnd(&first, 15);
    insertAtEnd(&first, 16);
    insertAtEnd(&first, 17);
    insertAtEnd(&first, 18);
    insertAtEnd(&first, 19);
    insertAtEnd(&first, 20);

    printList(first);

    return 0;
}