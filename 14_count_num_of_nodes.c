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
 
int CountList(struct Node* head) {
    int count = 0 ;
    struct Node* temp = head;
    while (temp != NULL) {
        temp = temp->link;
        count += 1;
    }
    printf("NULL\n");
    return count;
}

int main() {
    struct Node* first = NULL;
    int node_count = 0;
    
    insertAtEnd(&first, 15);
    insertAtEnd(&first, 16);
    insertAtEnd(&first, 17);
    insertAtEnd(&first, 18);
    insertAtEnd(&first, 19);
    insertAtEnd(&first, 20);
    insertAtEnd(&first, 128);
    insertAtEnd(&first, 139);
    insertAtEnd(&first, 230);

    node_count = CountList(first);
    if (node_count > 0){
        printf("No of node in linked lists are :%d",node_count);
    }
    
    return 0;
}
