#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to remove the nth node from the end of the linked list
void removeNthFromEnd(struct Node** head, int n) {
    struct Node *first = *head, *second = *head;
    
    // Move the second pointer n nodes ahead
    for (int i = 0; i < n; ++i) {
        if (second == NULL) {
            fprintf(stderr, "Error: The linked list is not long enough.\n");
            return;
        }
        second = second->next;
    }

    // If the second pointer reached the end, remove the head
    if (second == NULL) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    // Move both pointers until the second pointer reaches the end
    while (second->next != NULL) {
        first = first->next;
        second = second->next;
    }

    // Now 'first' is pointing to the node before the one to be removed
    struct Node* temp = first->next;
    first->next = temp->next;
    free(temp);
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original Linked List: ");
    printList(head);

    int n = 2; // Example: Remove 2nd node from the end
    removeNthFromEnd(&head, n);

    printf("Linked List after removing %dth node from the end: ", n);
    printList(head);

    return 0;
}