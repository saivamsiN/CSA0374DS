#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to search for a key element in the linked list
int searchElement(struct Node *head, int key) {
    struct Node *current = head;
    int position = 0;

    while (current != NULL) {
        if (current->data == key) {
            return position;  // Return the position where the key was found
        }
        current = current->next;
        position++;
    }

    return -1;  // Return -1 if the key was not found
}

int main() {
    struct Node *head = NULL;
    

    int key;
    printf("Enter the key element to search: ");
    scanf("%d", &key);

    int position = searchElement(head, key);

    if (position != -1) {
        printf("Element %d found at position %d.\n", key, position);
    } else {
        printf("Element %d not found in the list.\n", key);
    }

    return 0;
}
