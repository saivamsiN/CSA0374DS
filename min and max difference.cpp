#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MAX and INT_MIN

// Define the structure of a node
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertEnd(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to find the minimum and maximum elements and their difference
void findMinMaxDifference(struct Node *head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    int min = INT_MAX;
    int max = INT_MIN;
    struct Node *current = head;

    while (current != NULL) {
        if (current->data < min) {
            min = current->data;
        }
        if (current->data > max) {
            max = current->data;
        }
        current = current->next;
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    printf("Difference: %d\n", max - min);
}

int main() {
    struct Node *head = NULL;
    int n, data;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insertEnd(&head, data);
    }
    
    printf("Linked List: ");
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    
    findMinMaxDifference(head);
    
    // Free memory used by linked list
    current = head;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}
