#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

int insertInSortedList(struct Node** first, int data ) {
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

    if ((*first)->data >= newNode->data) {
        newNode->link = *first;
        *first = newNode;
        return 0;
    }

    struct Node* current = *first;
    while (current->link != NULL && current->link->data < newNode->data) {
        current = current->link;
    }

    newNode->link = current->link;
    current->link = newNode;

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
   
    insertInSortedList(&first, 15);
    insertInSortedList(&first, 14);
    insertInSortedList(&first, 155);
    insertInSortedList(&first, 1);
    insertInSortedList(&first, 2);
    insertInSortedList(&first, 135);
 
    printList(first);

    return 0;
}
