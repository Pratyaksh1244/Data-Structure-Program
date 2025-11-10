// Insert node at begining

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int value) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    
    newNode->next = *head;

   
    *head = newNode;
}


void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value;

    printf("How many nodes do you want to insert at the beginning? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertAtBeginning(&head, value);
        displayList(head);
    }

    return 0;
}

