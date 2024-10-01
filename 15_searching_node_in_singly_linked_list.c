#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

int insertAtEnd(struct Node** first, int data) {
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

int searchList(struct Node* head, int x) {
    if (head == NULL) {
        printf("List is empty.\n");
        return -1;
    }
    int pos = 1;
    struct Node* save = head;
    while (save != NULL && save->data != x) {
        save = save->link;
        pos++;
    }
    
    if (save != NULL && save->data == x) {
        printf("Node found at: %dth place.\n", pos);
        return pos;
    } else {
        printf("Node not found in the list.\n");
        return -1;
    }
}

int main() {
    struct Node* first = NULL;

    insertAtEnd(&first, 15);
    insertAtEnd(&first, 16);
    insertAtEnd(&first, 17);
    insertAtEnd(&first, 18);

    searchList(first, 15);

    return 0;
}
